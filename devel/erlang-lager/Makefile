
PORTNAME=	lager
PORTVERSION=	3.2.4
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Logging framework for Erlang

LICENSE=	APACHE20

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	basho

ERL_RUN_DEPS=	devel/erlang-goldrush

OPTIONS_DEFINE=	DOCS

post-build:
	@${RM} -r ${WRKSRC}/priv

.include <bsd.port.mk>
