
PORTNAME=	metasploit-model
PORTVERSION=	3.1.3
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Metasploit Model Mixins and Validators

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activemodel52>=5.2.2:databases/rubygem-activemodel52 \
		rubygem-activesupport52>=5.2.2:devel/rubygem-activesupport52 \
		rubygem-railties52>=5.2.2:www/rubygem-railties52

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
