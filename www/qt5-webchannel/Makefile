
PORTNAME=	webchannel
DISTVERSION=	${QT5_VERSION}
PORTREVISION=	1
CATEGORIES=	www
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 library for integration of C++/QML with HTML/js clients

USES=		compiler:c++11-lang qmake:norecursive qt-dist:5,webchannel
USE_QT=		buildtools_build core declarative

# The default EXTRACT_AFTER_ARGS value excludes examples/ from the extracted
# tarball, which we need during the build.
EXTRACT_AFTER_ARGS=	--no-same-owner --no-same-permissions

.include <bsd.port.mk>
