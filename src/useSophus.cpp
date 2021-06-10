#include <iostream>
#include <cmath>
#include "Log.h"


#include <Eigen/Core>
#include <Eigen/Geometry>

#include "sophus/so3.h"
#include "sophus/se3.h"

int main( int argc, char** argv )
{
    //Set the log first 
    za::my_logger::logger_type log = za::my_logger::get();
    za::Log logManager;   
    logManager.set_log_file("./log/logSophus.log"); 
    // Rotation matrix rotated 90 degrees along the Z axis
    Eigen::Matrix3d R = Eigen::AngleAxisd(M_PI/2, Eigen::Vector3d(0,0,1)).toRotationMatrix();
    
    Sophus::SO3 SO3_R(R);               // Sophus::SO(3) can be constructed directly from the rotation matrix
    Sophus::SO3 SO3_v( 0, 0, M_PI/2 );  // Can also be constructed from rotation vectors
    Eigen::Quaterniond q(R);            // Or quaternion
    Sophus::SO3 SO3_q( q );
    // The above expressions are all equivalent
    // When outputting SO(3), output as so(3)
    BOOST_LOG_SEV(log, za::report)<<"SO(3) from matrix: "<<SO3_R<<"\n";
    BOOST_LOG_SEV(log, za::report)<<"SO(3) from vector: "<<SO3_v<<"\n";
    BOOST_LOG_SEV(log, za::report)<<"SO(3) from quaternion :"<<SO3_q<<"\n";
    
    // Use logarithmic mapping to get its Lie algebra
    Eigen::Vector3d so3 = SO3_R.log();
    BOOST_LOG_SEV(log, za::report)<<"so3 = "<<so3.transpose()<<"\n";
    // hat is a vector to an antisymmetric matrix
    BOOST_LOG_SEV(log, za::report)<<"so3 hat=\n"<<Sophus::SO3::hat(so3)<<"\n";
    // In contrast, vee is antisymmetric to vector
    BOOST_LOG_SEV(log, za::report)<<"so3 hat vee= "<<Sophus::SO3::vee( Sophus::SO3::hat(so3) ).transpose()<<"\n"; //Transpose is purely for the output to be more beautiful
    
    // Update of incremental disturbance model
    Eigen::Vector3d update_so3(1e-4, 0, 0); //Assuming that the amount of updates is so much
    Sophus::SO3 SO3_updated = Sophus::SO3::exp(update_so3)*SO3_R;
    BOOST_LOG_SEV(log, za::report)<<"SO3 updated = "<<SO3_updated<<"\n";
    
    /********************Next Demo*****************************/
    BOOST_LOG_SEV(log, za::report)<<"************Next Demo*************"<<"\n";
    // Similar to SE(3) operations
    Eigen::Vector3d t(1,0,0);           // Translate along the X axis 1
    Sophus::SE3 SE3_Rt(R, t);           //From R,t build SE(3)
    Sophus::SE3 SE3_qt(q,t);            // From q,t build SE(3)
    BOOST_LOG_SEV(log, za::report)<<"SE3 from R,t= "<<"\n"<<SE3_Rt<<"\n";
    BOOST_LOG_SEV(log, za::report)<<"SE3 from q,t= "<<"\n"<<SE3_qt<<"\n";
    // Lie algebra se(3) is a six-dimensional vector, typedef for convenience
    typedef Eigen::Matrix<double,6,1> Vector6d;
    Vector6d se3 = SE3_Rt.log();
    BOOST_LOG_SEV(log, za::report)<<"se3 = "<<se3.transpose()<<"\n";
    // Observing the output, you will find that in Sophus, the translation of se(3) is in the front and the rotation is in the back.
    // Similarly, there are two operators hat and vee
    BOOST_LOG_SEV(log, za::report)<<"se3 hat = "<<"\n"<<Sophus::SE3::hat(se3)<<"\n";
    BOOST_LOG_SEV(log, za::report)<<"se3 hat vee = "<<Sophus::SE3::vee( Sophus::SE3::hat(se3) ).transpose()<<"\n";
    
    // Finally, demonstrate the update
    Vector6d update_se3; //Update amount
    update_se3.setZero();
    update_se3(0,0) = 1e-4d;
    Sophus::SE3 SE3_updated = Sophus::SE3::exp(update_se3)*SE3_Rt;
    BOOST_LOG_SEV(log, za::report)<<"SE3 updated = "<<"\n"<<SE3_updated.matrix()<<"\n";
    
    return 0;
}