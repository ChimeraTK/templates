all: template.pdf

.tex.pdf:
	echo "\\\newcommand{\\\svnrevision}{Revision "`svnversion -n`"}" > svnrevision.tex
	pdflatex $<
	rm svnrevision.tex

.SUFFIXES: .tex .pdf

