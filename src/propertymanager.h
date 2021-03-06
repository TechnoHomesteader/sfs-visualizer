/**
 * \class PropertyManager
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

#ifndef PROPERTYMANAGER_H
#define PROPERTYMANAGER_H

#include "stdincl.h"
#include "property.h"
#include "shader.h"

namespace sfs_visualizer
{

    typedef std::map<std::string,Property> PropertyMap;
    typedef std::pair<std::string, Property> PropertyPair;

/**
 *  A singletonclass for managing the properties and settings                                      
 **/
class PropertyManager
{
public:
    static PropertyManager& instance();//Singleton
    ~PropertyManager(void);
 
    void save();
    void load();
    Property& addProperty( const std::string& name, float defaultValue );
    float getPropertyValue( const std::string& name );
    Property& getProperty( const std::string& name );
    Property& addShaderProperty(const std::string& name, float defaultValue, Shader* _shader );
    PropertyMap _properties;
    void writeShaderValues(Shader* activeShader);
    void setPropertyValue( const std::string& name, float val );
    void resetPropertyValue( const std::string& name );
    bool propertyExists(const std::string& name) const;
private:
    PropertyManager(void);
    PropertyManager(const PropertyManager&);
    char _delimiter;
};

}

#endif
// Settings for Vim (http://www.vim.org/), please do not remove:
// vim:softtabstop=2:shiftwidth=2:expandtab:textwidth=80:cindent
// vim:fdm=expr:foldexpr=getline(v\:lnum)=~'/\\*\\*'&&getline(v\:lnum)!~'\\*\\*/'?'a1'\:getline(v\:lnum)=~'\\*\\*/'&&getline(v\:lnum)!~'/\\*\\*'?'s1'\:'='