
PORTNAME=	kde-cli-tools
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 non-interactive system tools


USES=		cmake compiler:c++11-lib cpe gettext kde:5 qt:5 tar:xz xorg
USE_KDE=	activities auth bookmarks codecs completion config configwidgets \
		coreaddons crash ecm emoticons guiaddons i18n iconthemes init \
		itemmodels itemviews jobwidgets kcmutils kdeclarative kdelibs4support kdesu \
		kio notifications parts plasma-workspace pty service solid sonnet \
		textwidgets unitconversion widgetsaddons windowsystem xmlgui
USE_QT=		concurrent core dbus declarative gui network printsupport svg testlib  widgets \
		x11extras xml \
		buildtools_build qmake_build
USE_XORG=	x11

.include <bsd.port.mk>
