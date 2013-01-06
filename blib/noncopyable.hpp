//  BrainlessLabs noncopyable.hpp header file  --------------------------------------//

//  (C) Copyright Shakti Misra 2013-.
//  This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0
//  License copy at You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef __BLIB_NONCOPYABLE_INCLUDED__
#define __BLIB_NONCOPYABLE_INCLUDED__

namespace blib{namespace impl{
   class noncopyable_impl
   {
   protected:
      noncopyable_impl(){}
      ~noncopyable_impl(){}
   private:
      noncopyable_impl(const noncopyable_impl&)
      const noncopyable_impl& operator=(const noncopyable_impl&);
   };
}
   typedef impl::noncopyable_impl noncopyable;
}

#endif // __BLIB_NONCOPYABLE_INCLUDED__
