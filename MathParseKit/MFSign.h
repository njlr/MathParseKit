/*!
 * \file
 * \author Carlo Bernaschina (www.bernaschina.com)
 * \copyright Copyright 2013 Carlo Bernaschina. All rights reserved.
 * \license This project is released under the GNU Lesser General Public License.
 */

#ifndef _MFSIGN_H
#define _MFSIGN_H

#include "MFunction.h"

namespace mpk
{

	class MFSign:public MFunction{
		protected:
			MFunction *m_fn;

		public:
		MFSign(MFunction *fn=NULL);
		virtual MFunction* Clone();
		virtual bool IsOk();
		virtual bool IsConstant(MVariablesList* variables);
		virtual MFunction* Solve(MVariablesList* variables);
		virtual MFunction* Derivate(MVariablesList *variables);
		virtual MVariablesList* GetVariablesList(MVariablesList *list=NULL);
		virtual MSistem* CalcDominum(MSistem *update);
		inline MFunction *GetFn(){
			return m_fn;
		}
		void SetFn(MFunction *fn);
		virtual void Release();
	};

}

#endif