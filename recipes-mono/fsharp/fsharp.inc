SUMMARY = "F# programming language"
DESCRIPTION = "F# is a strongly-typed, functional-first programming language for writing simple code to solve complex problems."
SECTION = "devel/mono"
DEPENDS = "mono"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "files://LICENSE;md5=512efb9375da0bd2fee9e2b9352c08af"

inherit autotools-brokensep

# For some reason the URL template changes from version to version,
# therefore use some variables for the directory and extension
SRC_URI = "https://github.com/fsharp/fsharp/archive/${PV}.tar.gz"

PACKAGES += "${PN}-dyn ${PN}-xbuild"

FILES_${PN} += "\
  ${libdir}/mono/*/*.exe \
  ${libdir}/mono/*/*.dll \
  ${libdir}/mono/*/*.dll.config \
  ${libdir}/mono/gac/*/*/*.dll \
  ${libdir}/mono/gac/*/*/*.dll.config \
"

FILES_${PN}-dbg += "\
  ${libdir}/mono/gac/*/*/*.mdb \
"

FILES_${PN}-xbuild = "\
  ${libdir}/mono/xbuild/* \
  ${libdir}/mono/xbuild-frameworks/* \
  ${libdir}/mono/Microsoft* \
  ${libdir}/mono/*/*.Targets \
"

FILES_${PN}-doc += "\
  ${libdir}/mono/*/*.xml \
  ${libdir}/mono/gac/*/*/*.xml \
"

FILES_${PN}-dyn = "\
  ${libdir}/mono/*/*.optdata \
  ${libdir}/mono/*/*.sigdata \
  ${libdir}/mono/gac/*/*/*.optdata \
  ${libdir}/mono/gac/*/*/*.sigdata \
"