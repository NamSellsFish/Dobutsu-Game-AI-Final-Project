# -*- coding: ISO-8859-15 -*-
#
# generated by wxGlade
#

import wx

# begin wxGlade: dependencies
import gettext
# end wxGlade

# begin wxGlade: extracode
# end wxGlade


class StylelessDialog(wx.Dialog):
    def __init__(self, *args, **kwds):
        # begin wxGlade: StylelessDialog.__init__
        kwds["style"] = kwds.get("style", 0)
        wx.Dialog.__init__(self, *args, **kwds)
        self.SetTitle(_("Style-less Dialog"))
        self.Layout()
        # end wxGlade

# end of class StylelessDialog

class StylelessFrame(wx.Frame):
    def __init__(self, *args, **kwds):
        # begin wxGlade: StylelessFrame.__init__
        kwds["style"] = kwds.get("style", 0)
        wx.Frame.__init__(self, *args, **kwds)
        self.SetTitle(_("Style-less Frame"))

        sizer_1 = wx.BoxSizer(wx.VERTICAL)

        sizer_1.Add((0, 0), 0, 0, 0)

        self.SetSizer(sizer_1)
        sizer_1.Fit(self)

        self.Layout()
        # end wxGlade

# end of class StylelessFrame