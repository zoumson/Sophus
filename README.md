[![LinkedIn][linkedin-shield]][linkedin-url]
<!--
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]


[![Github][github-shield]][github.com/zoumson?tab=repositories]
[![Stack Overflow][stackoverflow-shield]][stackoverflow.com/users/11175375/adam]
[![Leetcode][leetcode-shield]][eetcode.com/Hard_Code/]
-->
## Eigen basics

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#file-structure">Files Structure</a>
      <ul>
        <li><a href="#folders">Folders</a></li>
        <li><a href="#entire-files-structure">Entire Files Structure</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

<!-- [![Product Name Screen Shot][product-screenshot]](https://example.com) -->

Eigen matrix manipulation

<!--Built with -->
### Built With

<br>

* [cmake](https://cmake.org/)
* [gnu](https://www.gnu.org/)
* [eigen](https://eigen.tuxfamily.org/)
* [boost](https://boost.org/)
* [Pangolin](https://github.com/stevenlovegrove/Pangolin)
<br>

## File Structure

### Folders

* [include/](include/): c++ header files.
* [src/](src/): c++ definitions.


### Entire Files Structure 


```
.
├── CMakeLists.txt
├── include
│   └── Log.h
├── README.md
└── src
    ├── eigenGeometry.cpp
    ├── eigenMatrix.cpp
    └── visualizeGeometry.cpp

```


<!-- GETTING STARTED -->
## Getting Started

This is a sample code of how you may use  the Eigen library matrix and transformations.
To get a local copy up and running follow these simple steps.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* cmake
  ```sh
  sudo apt-get install cmake
  ```
 * eigen
 ```sh
 sudo apt-get install -y libeigen3-dev
 ```
 * boost
 ```sh
 sudo apt-get install libboost-all-dev
 ```
 * pangolin
 ```sh
 git clone https://github.com/stevenlovegrove/Pangolin.git
 sudo apt-get install libglew-dev
 sudo apt-get install cmake
 sudo apt-get install libpython2.7-dev
 sudo apt-get install ffmpeg libavcodec-dev libavutil-dev libavformat-dev libswscale-dev libavdevice-dev
 sudo apt-get install libdc1394-22-dev libraw1394-dev
 sudo apt-get install libjpeg-dev libpng12-dev libtiff5-dev libopenexr-dev
 cd Pangolin
 mkdir build
 cd build
 cmake ..
 cmake --build .
 make install
 ```
### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/zoumson/Eigen.git
   ```
2. Go to the project directory source
   ```sh
   cd Eigen
   ```
3. Create empty directories `build`, `log`, and `bin`
   ```sh
   mkdir build &&  mkdir bin && mkdir log
   ```
5. Generate the exectutable `demo` and move it to `bin`
   ```sh
   cd build && cmake .. && make -j4 && cd ..
   ```

<!-- USAGE EXAMPLES -->
### Usage
1. Run for matrix usage 
   ```sh
   ./bin/eigenMatrix
   ```
2. Run for geomotry computation 
   ```sh
   ./bin/eigenGeometry
   ```
3. Run for geomotry graphical representation
   ```sh
   ./bin/visualizeGeometry
   ```

4. Back to the initial file structure configuration
   ```sh
   rm -r bin build log
   ```
<!-- ROADMAP -->
## Roadmap

All the headers files are well docummented, read through the comments

<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Adama Zouma - <!-- [@your_twitter](https://twitter.com/your_username) -->- stargue49@gmail.com

Project Link: [https://github.com/zoumson/Eigen](https://github.com/zoumson/Eigen.git)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements
* [Google](https://www.google.com/)
* [Stack Overflow](https://stackoverflow.com/)
* [Github](https://github.com/)




<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: linkedin.com/in/adama-zouma-553bba13a
[product-screenshot]: images/screenshot.png

