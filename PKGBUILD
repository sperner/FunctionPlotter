# Contributor: Sven Sperner <cethss@gmail.com>
#
# for arch build system, run with 'makepkg'
#

pkgname=FunctionPlotter
pkgver=0.1
pkgrel=1
pkgdesc="Qt Function Plotter Widget / Designer-PlugIn"

arch=('i686' 'x86_64')
url="https://github.com/sperner/FunctionPlotter"
source=("git+https://github.com/sperner/FunctionPlotter")
license=()

depends=('qt4>=4.0')
makedepends=('gcc>=3' 'cmake' 'git')
optdepends=()

md5sums=('SKIP')

build()
{
        cd "$srcdir/$pkgname"
	qmake || return 1
	make || return 1
}

package()
{
	cd "$srcdir/$pkgname"
	mkdir -p "$pkgdir"/usr/lib/qt/plugins/designer || return 1
	cp libplotterplugin.so "$pkgdir"/usr/lib/qt/plugins/designer/ || return 1
}
