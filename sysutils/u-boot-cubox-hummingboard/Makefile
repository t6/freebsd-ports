
MASTERDIR=	${.CURDIR}/../u-boot-master

MODEL=		cubox-hummingboard
BOARD_CONFIG=	mx6cuboxi_defconfig
FAMILY=		imx6

IMXFILE=	u-boot.imx
UBOOT_PLIST=	${IMXFILE}

ALL_TARGET=	u-boot-with-spl.imx

pre-install: .PHONY
	@${CP} ${WRKSRC}/u-boot-with-spl.imx ${WRKSRC}/${IMXFILE}

.include "${MASTERDIR}/Makefile"
