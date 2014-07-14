#Guide on using Third-party Libraries

##Third-party Libraries
###What is Third-party Libraries
Reusable software component developed to be either freely distributed or sold by an entity other than the original vendor of the development platform.

###Licenses
- Types of Licenses (http://en.wikipedia.org/wiki/List_of_software_licenses)
  - Open-source/free software licenses
  - Non-free software license
  - Commercial Royalty-Free
- GPL vs LGPL (http://stackoverflow.com/questions/10130143/gpl-lgpl-and-static-linking)
  - Proprietary Source code + GPL Source code = GPL
  - Proprietary Source code + LGPL Source code
    - Statically Linked = LGPL
    - Dynamically Linked = Proprietary + LGPL

###Choose Third-party Libraries
- Functionality
- Licenses
- Quality / Review / Comparison
- Actively development / maintenance
- Cross-platform
- Unicode support
- Dynamically/Statically link
- Dependencies on other Third-party Libraries
- Test / Benchmark
  - Footprint
  - Performance

###Common Steps on Compile and Install Third-party Libraries
- configuration
- make
- make install

###libcurl (http://curl.haxx.se/)
- Study
  - Functionality (http://en.wikipedia.org/wiki/CURL)
  - License (http://curl.haxx.se/docs/copyright.html)
  - Comparison (http://daniel.haxx.se/docs/curl-vs-wget.html)
  - Actively Development (http://curl.haxx.se/changes.html)
  - Cross-platform
  - Both dynamically and statically link
  - No dependencies on other Third-party Libraries
  - Small footprint
  - Good performance
- Compile & Install
  - Download (http://curl.haxx.se/download.html)
  - Configure - autoconf
  - Compile - make
  - Install - make install

    ```
    $ ./configure --help
    $ ./configure --disable-debug --enable-optimize --enable-static --disable-shared
    $ make
    $ make install
    ```
