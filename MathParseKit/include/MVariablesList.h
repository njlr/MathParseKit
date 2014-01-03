/*!
 * \file
 * \author Carlo Bernaschina (www.bernaschina.com)
 * \copyright Copyright 2013 Carlo Bernaschina. All rights reserved.
 * \license This project is released under the GNU Lesser General Public License.
 */

#ifndef MPK_MVariablesList_H
#define MPK_MVariablesList_H
	
#include "MVariableElement.h"

namespace mpk
{

	struct MvariablesItem{
		MVariableElement *link;
		MvariablesItem *next;
	};

	class MVariablesList{
		protected:
			MvariablesItem *m_pt;
			int m_count;
		public:
			MVariablesList();
			MVariablesList(MVariablesList &);
			~MVariablesList();
			inline int Count(){
				return m_count;
			}
			MVariableElement *Add(const wchar_t *name=NULL, double value=0.0);
			MVariableElement *Add(const std::wstring &name, double value=0.0);
			MVariableElement *Add(MVariableElement *element);
			MVariableElement *GetItem(int index);
			MVariableElement *GetItem(const wchar_t *name);
			MVariableElement *GetItem(const std::wstring &name);
			int FindItem(const wchar_t *name);
			int FindItem(const std::wstring &name);
			int DeleteElement(int index);
			int DeleteElement(const wchar_t *name);
			int DeleteElement(const std::wstring &name);
	};

}
#endif