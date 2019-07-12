\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 3/4
		\clef "treble_8"

		\key e \major
		R2.*9  |
%% 10
		b 2 gis 4  |
		a 4 gis fis  |
		e 4 ( fis ) gis  |
		fis 2.  |
		b 2 gis 4  |
%% 15
		a 4 gis b 8 b  |
		b 4 b r  |
		b 2 gis 4  |
		a 4 gis fis  |
		e 4 ( fis ) gis  |
%% 20
		fis 2.  |
		b 2 gis 4  |
		a 4 gis b 8 b  |
		b 4 b r  |
		\key fis \major
		cis' 2 ais 4  |
%% 25
		b 4 ais gis  |
		fis 4 ( gis ) ais  |
		gis 2.  |
		cis' 2 ais 4  |
		b 4 ais cis' 8 cis'  |
%% 30
		cis' 4 cis' r  |
		cis' 2 ais 4  |
		b 4 ais gis  |
		fis 4 ( gis ) ais  |
		gis 2.  |
%% 35
		cis' 2 ais 4  |
		b 4 ais cis' 8 cis'  |
		cis' 4 cis' r  |
		\key a \major
		R2.*20  |
		\key fis \major
		cis' 2 ais 4  |
		b 4 ais gis  |
%% 60
		fis 4 ( gis ) ais  |
		gis 2.  |
		cis' 2 ais 4  |
		b 4 ais cis' 8 cis'  |
		cis' 4 cis' r  |
%% 65
		cis' 2 ais 4  |
		b 4 ais gis  |
		fis 4 ( gis ) ais  |
		gis 2.  |
		cis' 2 ais 4  |
%% 70
		b 4 ais cis' 8 cis'  |
		cis' 4 cis' r  |
		cis' 2 ais 4  |
		b 4 ais gis  |
		fis 4 ( gis ) ais  |
%% 75
		gis 2.  |
		cis' 2 ais 4  |
		b 4 ais cis' 8 cis'  |
		cis' 4 cis' r  |
		R2.*8  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.

		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.

		Por su pro -- pia vo __ lun tad __
		el Pa -- dre nos en __ gen -- dró
		me -- dian -- te la pa -- la -- bra de __ la ver -- dad,
		pa -- ra que fué -- ra -- mos
		pri -- mi -- cias de sus cre -- a -- tu -- ras.


		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
	}
>>
