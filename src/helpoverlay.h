/**
 * \class HelpOverlay
 *
 * \author Marcus Zepp
 *
 * \version $Revision: 1.0 $
 *
 * \date $Date: 2014/03/26 14:16:20 $
 *
 * Contact: zeppfisj@mailbox.tu-berlin.de
 *
 * This file is part of sfs-visualizer.
 *
 * sfs-visualizer is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * sfs-visualizer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with sfs-visualizer. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HELPOVERLAY_H
#define HELPOVERLAY_H
#include "renderobject.h"
#include "renderobjectbase.h"

namespace sfs_visualizer
{
    /**
     * A RenderObject, that displays the help menu
     **/
    class HelpOverlay:public RenderObjectBase<HelpOverlay>
    {
    public:
        HelpOverlay(void);
        ~HelpOverlay(void);

        virtual void key(unsigned char key, int x, int y);

    protected:
        virtual void draw_impl();
    };
}
#endif

// Settings for Vim (http://www.vim.org/), please do not remove:
// vim:softtabstop=2:shiftwidth=2:expandtab:textwidth=80:cindent
// vim:fdm=expr:foldexpr=getline(v\:lnum)=~'/\\*\\*'&&getline(v\:lnum)!~'\\*\\*/'?'a1'\:getline(v\:lnum)=~'\\*\\*/'&&getline(v\:lnum)!~'/\\*\\*'?'s1'\:'='