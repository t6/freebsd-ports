
PORTNAME=	gcta
DISTVERSION=	1.26.0
PORTREVISION=	3
CATEGORIES=	biology
MASTER_SITES=	https://cnsgenomics.com/software/gcta/pre_gcta/
DISTNAME=	${PORTNAME}_${PORTVERSION}_src

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Genome-wide Complex Trait Analysis

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/GNU_General_Public_License_v3.txt

LIB_DEPENDS=	libopenblas.so:math/openblas

USES=		compiler:c++11-lang dos2unix eigen:3 gmake localbase:ldflags zip

CXXFLAGS+=	-I${LOCALBASE}/include/eigen3 -fopenmp
LDFLAGS+=	-lopenblas

INSTALL_TARGET=	install-strip
PLIST_FILES=	bin/gcta

do-extract:
	${UNZIP_NATIVE_CMD} -d ${WRKSRC} ${DISTDIR}/${DISTFILES}

.include <bsd.port.mk>
