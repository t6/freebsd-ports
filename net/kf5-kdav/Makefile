
PORTNAME=	kdav
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTEPOCH=	1
CATEGORIES=	net kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	DAV protocol implementation with KJobs

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons ecm i18n kio service
USE_QT=		concurrent core dbus gui network xml xmlpatterns \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
