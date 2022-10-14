\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 3/4
		\clef "treble"

		\key e \major
		R2.*9  |
%% 10
		b' 2 gis' 4  |
		a' 4 gis' fis'  |
		e' 4 ( fis' ) gis'  |
		fis' 2.  |
		b' 2 gis' 4  |
%% 15
		a' 4 gis' b' 8 b'  |
		b' 4 b' r  |
		b' 2 gis' 4  |
		a' 4 gis' fis'  |
		e' 4 ( fis' ) gis'  |
%% 20
		fis' 2.  |
		b' 2 gis' 4  |
		a' 4 gis' b' 8 b'  |
		b' 4 b' r  |
		\key fis \major
		cis'' 2 ais' 4  |
%% 25
		b' 4 ais' gis'  |
		fis' 4 ( gis' ) ais'  |
		gis' 2.  |
		cis'' 2 ais' 4  |
		b' 4 ais' cis'' 8 cis''  |
%% 30
		cis'' 4 cis'' r  |
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
		fis' 4 ( gis' ) ais'  |
		gis' 2.  |
%% 35
		cis'' 2 ais' 4  |
		b' 4 ais' cis'' 8 cis''  |
		cis'' 4 cis'' r  |
		\key a \major
		cis'' 2 cis'' 4  |
		cis'' 2 cis'' 4  |
%% 40
		cis'' 4 ( b' ) a'  |
		a' 4 ( gis' ) fis'  |
		d'' 2 d'' 4  |
		d'' 4 cis'' a'  |
		b' 2.  |
%% 45
		R2.  |
		cis'' 4 cis'' cis''  |
		cis'' 2 cis'' 4  |
		cis'' 4 b' a' ~  |
		a' 4 gis' fis'  |
%% 50
		d'' 4 d'' d''  |
		d'' 4 cis'' a'  |
		b' 2.  |
		r2 fis' 4  |
		d'' 4 d'' d''  |
%% 55
		d'' 4 cis'' a'  |
		b' 2.  |
		b' 2 r4  |
		\key fis \major
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
%% 60
		fis' 4 ( gis' ) ais'  |
		gis' 2.  |
		cis'' 2 ais' 4  |
		b' 4 ais' cis'' 8 cis''  |
		cis'' 4 cis'' r  |
%% 65
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
		fis' 4 ( gis' ) ais'  |
		gis' 2.  |
		cis'' 2 ais' 4  |
%% 70
		b' 4 ais' cis'' 8 cis''  |
		cis'' 4 cis'' r  |
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
		fis' 4 ( gis' ) ais'  |
%% 75
		gis' 2.  |
		cis'' 2 ais' 4  |
		b' 4 ais' cis'' 8 cis''  |
		cis'' 4 cis'' r  |
		R2.*8  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
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
