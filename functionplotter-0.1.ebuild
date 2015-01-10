# Copyright 1999-2013 Gentoo Foundation
# Distributed under the terms of the GNU General Public License v2
# $Header: $

EAPI=5

inherit git-2

DESCRIPTION="A Function Plotter PlugIn / Widget for QtDesigner"
HOMEPAGE="https://github.com/sperner/FunctionPlotter"
EGIT_PROJECT="FunctionPlotter"
EGIT_REPO_URI="https://github.com/sperner/FunctionPlotter/"

LICENSE="GPL-3"
SLOT="0"
KEYWORDS="~mips ~sparc ~x86 ~amd64"
#IUSE="ssl,sql"

DEPEND="dev-qt/qtcore
	dev-qt/qtgui
	dev-util/cmake
	dev-vcs/git"

src_compile() {
	qmake
	emake
}

src_install() {
	insinto /usr/lib/qt4/plugins/designer/
	doins libplotterplugin.so
}
