#Guide on Using Third-party Libraries (Unix-like Env)

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

###Lab: libcurl (http://curl.haxx.se/)
- Study
  - Functionality (http://en.wikipedia.org/wiki/CURL)
  - License (http://curl.haxx.se/docs/copyright.html)
  - Comparison (http://daniel.haxx.se/docs/curl-vs-wget.html)
  - Actively Development (http://curl.haxx.se/changes.html)
  - Cross-platform
  - Both dynamically and statically link
  - HTTP - No dependencies on other Third-party Libraries
  - Small footprint
  - Good performance
- Compile & Install
  - Download (http://curl.haxx.se/download.html)
  - Configure - autoconf
  - Compile - make
  - Install - make install

    ```
    # Rename mingw sed.exe as it does not support autoconf well.
    $ mv /mingw/bin/sed.exe /mingw/bin/sed.mingw.exe
    # Check autoconf options
    $ ./configure --help
    # Run autoconf
    $ ./configure --disable-debug --enable-optimize --enable-static --disable-shared
    # Compile
    $ make
    # Install
    $ make install
    ```

###Using Third-party Libraries
- Study Third-party Libraries from its docs and demos
- Include library head files in source code
- Compile with Third-party Libraries
  - Use the `-I` compiler option to specify path to third-party Libraries
- Link with Third-party Libraries
  - Use the `-L` linker option to specify path to third-party libs
  - Use the `-l` linker option to specify any third-party libs to link

###Lab: TinyWebCrawler
- `$ git clone https://github.com/limingjie/TinyWebCrawler.git`
- `$ curl-config`

    ```
    Usage: curl-config [OPTION]

    Available values for OPTION include:

      --built-shared says 'yes' if libcurl was built shared
      --ca        ca bundle install path
      --cc        compiler
      --cflags    pre-processor and compiler flags
      --checkfor [version] check for (lib)curl of the specified version
      --configure the arguments given to configure when building curl
      --features  newline separated list of enabled features
      --help      display this help and exit
      --libs      library linking information
      --prefix    curl install prefix
      --protocols newline separated list of enabled protocols
      --static-libs static libcurl library linking information
      --version   output version information
      --vernum    output the version information as a number (hexadecimal)
    ```

- `$ make`
