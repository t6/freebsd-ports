# Created by: Bob Bomar <bob@fly.homeunix.org>

PORTNAME=	phpsysinfo
DISTVERSIONPREFIX=	v
DISTVERSION=	3.3.2
CATEGORIES=	www

MAINTAINER=	tremere@cainites.net
COMMENT=	PHP script for displaying system information

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		php:web shebangfix
USE_GITHUB=	yes
USE_PHP=	dom mbstring pcre simplexml xml

SHEBANG_FILES=	tools/check.sh

NO_ARCH=	yes
NO_BUILD=	yes
SUB_FILES=	pkg-message

PLIST_FILES=	"@sample ${WWWDIR}/phpsysinfo.ini.new ${WWWDIR}/phpsysinfo.ini"

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	(cd ${WRKSRC} && \
		${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR} "! -name .travis.yml ! -name .gitignore")
	@${FIND} -s ${STAGEDIR}${WWWDIR} -not -type d | \
		${SED} -e 's#^${STAGEDIR}${PREFIX}/##' > ${TMPPLIST}

.include <bsd.port.mk>
