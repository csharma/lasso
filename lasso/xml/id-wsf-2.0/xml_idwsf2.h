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

#ifndef __LASSO_XML_IDWSF2_H__
#define __LASSO_XML_IDWSF2_H__

#include "./disco_abstract.h"
#include "./disco_endpoint_context.h"
#include "./disco_keys.h"
#include "./disco_options.h"
#include "./disco_provider_id.h"
#include "./disco_query.h"
#include "./disco_query_response.h"
#include "./disco_requested_service.h"
#include "./disco_security_context.h"
#include "./disco_service_context.h"
#include "./disco_service_type.h"
#include "./disco_svc_md_association_add.h"
#include "./disco_svc_md_association_add_response.h"
#include "./disco_svc_md_association_delete.h"
#include "./disco_svc_md_association_delete_response.h"
#include "./disco_svc_md_association_query.h"
#include "./disco_svc_md_association_query_response.h"
#include "./disco_svc_md_delete.h"
#include "./disco_svc_md_delete_response.h"
#include "./disco_svc_md_query.h"
#include "./disco_svc_md_query_response.h"
#include "./disco_svc_md_register.h"
#include "./disco_svc_md_register_response.h"
#include "./disco_svc_md_replace.h"
#include "./disco_svc_md_replace_response.h"
#include "./disco_svc_metadata.h"
#include "./dst_data_response_base.h"
#include "./dst_delete_item_base.h"
#include "./dst_delete_response.h"
#include "./dstref_app_data.h"
#include "./dstref_create.h"
#include "./dstref_create_item.h"
#include "./dstref_create_response.h"
#include "./dstref_data.h"
#include "./dstref_data_response.h"
#include "./dstref_delete.h"
#include "./dstref_delete_item.h"
#include "./dstref_delete_response.h"
#include "./dstref_item_data.h"
#include "./dstref_modify.h"
#include "./dstref_modify_item.h"
#include "./dstref_modify_response.h"
#include "./dstref_query.h"
#include "./dstref_query_item.h"
#include "./dstref_query_response.h"
#include "./dstref_result_query.h"
#include "./dstref_test_item.h"
#include "./dst_request.h"
#include "./dst_result_query_base.h"
#include "./dst_test_item_base.h"
#include "./ims_identity_mapping_request.h"
#include "./ims_identity_mapping_response.h"
#include "./ims_mapping_input.h"
#include "./ims_mapping_output.h"
#include "./is_help.h"
#include "./is_inquiry_element.h"
#include "./is_inquiry.h"
#include "./is_interaction_request.h"
#include "./is_interaction_response.h"
#include "./is_interaction_statement.h"
#include "./is_item.h"
#include "./is_parameter.h"
#include "./is_select.h"
#include "./is_text.h"
#include "./ps_add_collection_request.h"
#include "./ps_add_collection_response.h"
#include "./ps_add_entity_request.h"
#include "./ps_add_entity_response.h"
#include "./ps_add_known_entity_request.h"
#include "./ps_add_known_entity_response.h"
#include "./ps_add_to_collection_request.h"
#include "./ps_get_object_info_request.h"
#include "./ps_get_object_info_response.h"
#include "./ps_item_data.h"
#include "./ps_list_members_request.h"
#include "./ps_list_members_response.h"
#include "./ps_notification.h"
#include "./ps_notify.h"
#include "./ps_object.h"
#include "./ps_query_objects_request.h"
#include "./ps_query_objects_response.h"
#include "./ps_remove_collection_request.h"
#include "./ps_remove_entity_request.h"
#include "./ps_remove_from_collection_request.h"
#include "./ps_request_abstract.h"
#include "./ps_resolve_identifier_request.h"
#include "./ps_resolve_identifier_response.h"
#include "./ps_resolve_input.h"
#include "./ps_response_abstract.h"
#include "./ps_set_object_info_request.h"
#include "./ps_test_membership_request.h"
#include "./ps_test_membership_response.h"
#include "./sb2_consent.h"
#include "./sb2_credentials_context.h"
#include "./sb2_endpoint_update.h"
#include "./sb2_redirect_request.h"
#include "./sb2_sender.h"
#include "./sb2_target_identity.h"
#include "./sb2_timeout.h"
#include "./sb2_usage_directive.h"
#include "./sb2_user_interaction_header.h"
#include "./sbf_framework.h"
#include "./sec_token.h"
#include "./sec_token_policy.h"
#include "./sec_transited_provider_path.h"
#include "./subs_notification.h"
#include "./subs_notify_response.h"
#include "./subsref_app_data.h"
#include "./subsref_create.h"
#include "./subsref_create_item.h"
#include "./subsref_create_response.h"
#include "./subsref_data.h"
#include "./subsref_data_response.h"
#include "./subsref_delete.h"
#include "./subsref_delete_item.h"
#include "./subsref_delete_response.h"
#include "./subsref_item_data.h"
#include "./subs_ref_item.h"
#include "./subsref_modify.h"
#include "./subsref_modify_item.h"
#include "./subsref_modify_response.h"
#include "./subsref_notification.h"
#include "./subsref_notify.h"
#include "./subsref_notify_response.h"
#include "./subsref_query.h"
#include "./subsref_query_item.h"
#include "./subsref_query_response.h"
#include "./subsref_result_query.h"
#include "./subsref_subscription.h"
#include "./subsref_test_item.h"
#include "./subs_subscription.h"
#include "./util_empty.h"
#include "./util_extension.h"
#include "./util_response.h"
#include "./util_status.h"
#include "./xml_idwsf2.h"

#endif
