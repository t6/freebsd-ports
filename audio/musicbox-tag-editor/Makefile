# Created by: Jean-Yves Lefort <jylefort@brutele.be>
#   $MCom: ports/audio/musicbox-tag-editor/Makefile,v 1.5 2007/09/10 05:13:24 mezz Exp $

PORTNAME=	musicbox-tag-editor
PORTVERSION=	0.2.3
PORTREVISION=	18
CATEGORIES=	audio
MASTER_SITES=	SF/musicbox/musicbox/${PORTVERSION}
DISTNAME=	musicbox-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple GTK+ audio tag editor

LIB_DEPENDS=	libtag.so:audio/taglib

USES=		gnome pathfix pkgconfig shebangfix
USE_GNOME=	gnomeprefix libglade2
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
# avoid conflict with audio/musicbox
CONFIGURE_ARGS=	--program-suffix=-tag-editor
SHEBANG_FILES=	data/edit.pl

CFLAGS+=		-fcommon

DEPRECATED=	Unmaintained and dead upstream, does not build with -fno-common (llvm 11)
EXPIRATION_DATE=2021-04-01

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/share/pixmaps|${PREFIX}/share/pixmaps|' \
		${WRKSRC}/data/musicbox.glade
	@${REINPLACE_CMD} -e 's|Exec=musicbox|Exec=musicbox-tag-editor|' \
		${WRKSRC}/data/musicbox.desktop

.include <bsd.port.mk>
