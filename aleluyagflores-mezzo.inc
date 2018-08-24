\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 3/4
		\clef "treble"

		\key e \major
		R2.*9  |
%% 10
		b' 2 gis' 4  |
		a' 4 gis' fis'  |
		e' 4 ~ e' e'  |
		b 2.  |
		e' 2 e' 4  |
%% 15
		e' 4 e' e' 8 e'  |
		e' 4 dis' r  |
		b' 2 gis' 4  |
		a' 4 gis' fis'  |
		e' 4 ~ e' e'  |
%% 20
		b 2.  |
		e' 2 e' 4  |
		e' 4 e' e' 8 e'  |
		e' 4 dis' r  |
		\key fis \major
		cis'' 2 ais' 4  |
%% 25
		b' 4 ais' gis'  |
		fis' 4 ~ fis' fis'  |
		cis' 2.  |
		fis' 2 fis' 4  |
		fis' 4 fis' fis' 8 fis'  |
%% 30
		fis' 4 eis' r  |
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
		fis' 4 ~ fis' fis'  |
		cis' 2.  |
%% 35
		fis' 2 fis' 4  |
		fis' 4 fis' fis' 8 fis'  |
		fis' 4 eis' r  |
		\key a \major
		R2.*20  |
		\key fis \major
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
%% 60
		fis' 4 ~ fis' fis'  |
		cis' 2.  |
		fis' 2 fis' 4  |
		fis' 4 fis' fis' 8 fis'  |
		fis' 4 eis' r  |
%% 65
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
		fis' 4 ~ fis' fis'  |
		cis' 2.  |
		fis' 2 fis' 4  |
%% 70
		fis' 4 fis' fis' 8 fis'  |
		fis' 4 eis' r  |
		cis'' 2 ais' 4  |
		b' 4 ais' gis'  |
		fis' 4 ~ fis' fis'  |
%% 75
		cis' 2.  |
		fis' 2 fis' 4  |
		fis' 4 fis' fis' 8 fis'  |
		fis' 4 eis' r  |
		R2.*8  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.

		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.

		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
		A -- le -- lu -- ya, a -- le __ lu -- ya.
		A -- le -- lu -- ya, a -- le -- lu -- ya.
	}
>>
