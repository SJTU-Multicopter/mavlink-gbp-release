#!/bin/sh -x
# Modified version of catkin template/python_distutils_install.sh.in

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

/usr/bin/env \
    "/usr/bin/python" \
    "/home/shqs/src/crop/mavlink-gbp-release/pymavlink/setup.py" \
    build --build-base "/home/shqs/src/crop/mavlink-gbp-release/obj-x86_64-linux-gnu/pymavlink/pybuild" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/opt/ros/jade"
