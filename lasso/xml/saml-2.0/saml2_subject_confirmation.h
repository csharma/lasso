/* $Id$
 *
 * Lasso - A free implementation of the Liberty Alliance specifications.
 *
 * Copyright (C) 2004-2007 Entr'ouvert
 * http://lasso.entrouvert.org
 *
 * Authors: See AUTHORS file in top-level directory.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LASSO_SAML2_SUBJECT_CONFIRMATION_H__
#define __LASSO_SAML2_SUBJECT_CONFIRMATION_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "saml2_encrypted_element.h"
#include "saml2_name_id.h"
#include "saml2_base_idabstract.h"
#include "saml2_subject_confirmation_data.h"

#define LASSO_TYPE_SAML2_SUBJECT_CONFIRMATION (lasso_saml2_subject_confirmation_get_type())
#define LASSO_SAML2_SUBJECT_CONFIRMATION(obj) \
	(G_TYPE_CHECK_INSTANCE_CAST((obj), LASSO_TYPE_SAML2_SUBJECT_CONFIRMATION, \
				LassoSaml2SubjectConfirmation))
#define LASSO_SAML2_SUBJECT_CONFIRMATION_CLASS(klass) \
	(G_TYPE_CHECK_CLASS_CAST((klass), LASSO_TYPE_SAML2_SUBJECT_CONFIRMATION, \
				LassoSaml2SubjectConfirmationClass))
#define LASSO_IS_SAML2_SUBJECT_CONFIRMATION(obj) \
	(G_TYPE_CHECK_INSTANCE_TYPE((obj), LASSO_TYPE_SAML2_SUBJECT_CONFIRMATION))
#define LASSO_IS_SAML2_SUBJECT_CONFIRMATION_CLASS(klass) \
	(G_TYPE_CHECK_CLASS_TYPE ((klass), LASSO_TYPE_SAML2_SUBJECT_CONFIRMATION))
#define LASSO_SAML2_SUBJECT_CONFIRMATION_GET_CLASS(o) \
	(G_TYPE_INSTANCE_GET_CLASS ((o), LASSO_TYPE_SAML2_SUBJECT_CONFIRMATION, \
				LassoSaml2SubjectConfirmationClass))

typedef struct _LassoSaml2SubjectConfirmation LassoSaml2SubjectConfirmation;
typedef struct _LassoSaml2SubjectConfirmationClass LassoSaml2SubjectConfirmationClass;


struct _LassoSaml2SubjectConfirmation {
	LassoNode parent;

	/*< public >*/
	/* elements */
	LassoSaml2BaseIDAbstract *BaseID;
	LassoSaml2NameID *NameID;
	LassoSaml2EncryptedElement *EncryptedID;
	LassoSaml2SubjectConfirmationData *SubjectConfirmationData;
	/* attributes */
	char *Method;
};


struct _LassoSaml2SubjectConfirmationClass {
	LassoNodeClass parent;
};

LASSO_EXPORT GType lasso_saml2_subject_confirmation_get_type(void);
LASSO_EXPORT LassoNode* lasso_saml2_subject_confirmation_new(void);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __LASSO_SAML2_SUBJECT_CONFIRMATION_H__ */
