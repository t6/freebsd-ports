
PORTNAME=	nheko
DISTVERSIONPREFIX=v
DISTVERSION=	0.8.1
CATEGORIES=	net-im

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Matrix IM client based on Qt technologies

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	nlohmann-json>=3:devel/nlohmann-json
# All those boost-libs are pulled in through mtxclient, which
# links to them but stage-qa still complains.
LIB_DEPENDS=	\
		libboost_chrono.so:devel/boost-libs \
		libboost_date_time.so:devel/boost-libs \
		libboost_iostreams.so:devel/boost-libs \
		libboost_regex.so:devel/boost-libs \
		libboost_system.so:devel/boost-libs \
		libboost_thread.so:devel/boost-libs \
		libcmark.so:textproc/cmark \
		libfmt.so:devel/libfmt \
		liblmdb.so:databases/lmdb \
		libmatrix_client.so:net-im/mtxclient \
		libolm.so:security/olm \
		libqt5keychain.so:security/qtkeychain \
		libspdlog.so:devel/spdlog

USES=		cmake compiler:c++17-lang pkgconfig \
		localbase:ldflags qt:5 ssl tar:xz
USE_QT=		concurrent core dbus declarative gui multimedia network \
		quickcontrols2 svg widgets \
		buildtools_build linguist_build qmake_build

# There are two external dependencies: lmdb++ and tweeny.
#  - lmdb++ is a single header file, it just needs to be included
#  - tweeny is a library, but only one header is needed; it is normally
#    installed into a tweeny/ subdirectory, but its sources place it
#    in include/. Add one more symlink to the build for that.
# We don't actually use the bundled versions, we get them via
# the ports system (see GH_TUPLE, below).
CMAKE_ARGS=	-DLMDBXX_INCLUDE_DIR=${WRKSRC}/deps/lmdb \
		-DTWEENY_INCLUDE_DIR=${WRKSRC}/deps/tweeny/include \
CFLAGS+=	-DSPDLOG_FMT_EXTERNAL=1
LDFLAGS+=	-L${LOCALBASE}/lib -lfmt

USE_GITHUB=	yes
GH_ACCOUNT=	Nheko-Reborn
GH_TUPLE=	drycpp:lmdbxx:0b43ca87d8cfabba392dfe884eb1edb83874de02:lmdb/deps/lmdb \
		mobius3:tweeny:6a5033372fe53c4c731c66c8a2d56261746cd85c:tweeny/deps/tweeny

post-extract:
	cd ${WRKSRC}/deps/tweeny && ${LN} -s include tweeny

.include <bsd.port.mk>
