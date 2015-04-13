# minimal-static-wine-64
Statically linked 'wine64' configured with nothing

```bash
#!/bin/bash
./configure LDFLAGS=-s --prefix=~/foobar --enable-win64 \
             --without-alsa \
             --without-capi \
             --without-cms \
             --without-coreaudio \
             --without-cups \
             --without-curses \
             --without-dbus \
             --without-fontconfig \
             --without-freetype \
             --without-gphoto \
             --without-glu \
             --without-gnutls \
             --without-gsm \
             --without-gstreamer \
             --without-hal \
             --without-jpeg \
             --without-ldap \
             --without-mpg123 \
             --without-openal \
             --without-opencl \
             --without-opengl \
             --without-osmesa \
             --without-oss \
             --without-png \
             --without-sane \
             --without-tiff \
             --without-v4l \
             --without-xcomposite \
             --without-xcursor \
             --without-xinerama \
             --without-xinput \
             --without-xinput2 \
             --without-xml \
             --without-xrandr \
             --without-xrender \
             --without-xshape \
             --without-xshm \
             --without-xslt \
             --without-xxf86vm \
             --without-zlib  \
