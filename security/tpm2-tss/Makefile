
PORTNAME=	tpm2-tss
DISTVERSION=	2.4.5
CATEGORIES=	security
MASTER_SITES=	https://github.com/tpm2-software/tpm2-tss/releases/download/${DISTVERSION}/

MAINTAINER=	tstruk@gmail.com
COMMENT=	TPM2 Software Stack core library

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libjson-c.so:devel/json-c \
		libcurl.so:ftp/curl

USES=		compiler:c11 gmake libtool pkgconfig ssl
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBCRYPTO_CFLAGS="-I${OPENSSLINC}" LIBCRYPTO_LIBS="-L${OPENSSLLIB} -lcrypto" \
		EXTRA_CFLAGS="-I${LOCALBASE}/include"
CONFIGURE_ARGS=	--disable-doxygen-doc --disable-dependency-tracking --enable-valgrind=no

INSTALL_TARGET=	install-strip

post-install:
	@${RM} ${STAGEDIR}${PREFIX}/lib/udev/rules.d/tpm-udev.rules
	@${RMDIR} ${STAGEDIR}${PREFIX}/lib/udev/rules.d
	@${RMDIR} ${STAGEDIR}${PREFIX}/lib/udev

.include <bsd.port.mk>
