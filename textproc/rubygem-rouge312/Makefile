
PORTNAME=	rouge
PORTVERSION=	3.12.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	312

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Simple, easy-to-extend drop-in replacement for pygments

LICENSE=	BSD2CLAUSE MIT
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

# bin/rougify
CONFLICTS_INSTALL=	rubygem-rouge2 rubygem-rouge

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/rougify

.include <bsd.port.mk>
