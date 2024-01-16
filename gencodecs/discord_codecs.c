#include "discord_codecs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "carray.h"
static char *
_gc_strndup(const char *src, size_t len)
{
    char *dest = malloc(len + 1);
    memcpy(dest, src, len);
    dest[len] = '\0';
    return dest;
}

   


   


   


   


   










   
   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
 
   
 
   
   
   
   
   


   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_audit_log_entry_init(struct discord_audit_log_entry *self); static void discord_audit_log_entry_cleanup(struct discord_audit_log_entry *self);
   
 
   
 
   
   
 
   
 
 
   
 
   

static void discord_audit_log_entries_cleanup(struct discord_audit_log_entries *self);
   

static void discord_optional_audit_entry_info_init(struct discord_optional_audit_entry_info *self); static void discord_optional_audit_entry_info_cleanup(struct discord_optional_audit_entry_info *self);
   
   
   
   
   
   
   
   

static void discord_optional_audit_entry_infos_cleanup(struct discord_optional_audit_entry_infos *self);
   

static void discord_audit_log_change_init(struct discord_audit_log_change *self); static void discord_audit_log_change_cleanup(struct discord_audit_log_change *self);
   
   
   

static void discord_audit_log_changes_cleanup(struct discord_audit_log_changes *self);
   

static void discord_get_guild_audit_log_init(struct discord_get_guild_audit_log *self); static void discord_get_guild_audit_log_cleanup(struct discord_get_guild_audit_log *self);
   
   
   
 
   
 


   
   
   
   


   
   
   


   


   
   
   

static void discord_auto_moderation_trigger_metadata_init(struct discord_auto_moderation_trigger_metadata *self); static void discord_auto_moderation_trigger_metadata_cleanup(struct discord_auto_moderation_trigger_metadata *self);
   
   

static void discord_auto_moderation_action_init(struct discord_auto_moderation_action *self); static void discord_auto_moderation_action_cleanup(struct discord_auto_moderation_action *self);
 
   
 
 
   
 

static void discord_auto_moderation_actions_cleanup(struct discord_auto_moderation_actions *self);
   

static void discord_auto_moderation_action_metadata_init(struct discord_auto_moderation_action_metadata *self); static void discord_auto_moderation_action_metadata_cleanup(struct discord_auto_moderation_action_metadata *self);
 
   
 
 
   
 


   
   
   
   
 
   
 
 
   
 
   
   
   
   
   


   


   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 

static void discord_delete_auto_moderation_rule_init(struct discord_delete_auto_moderation_rule *self); static void discord_delete_auto_moderation_rule_cleanup(struct discord_delete_auto_moderation_rule *self);
   


   
   


   
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 
 
   
 
 
   
 


   

static void discord_invite_metadata_init(struct discord_invite_metadata *self); static void discord_invite_metadata_cleanup(struct discord_invite_metadata *self);
   
   
   
   
 
   
 

static void discord_invite_stage_instance_init(struct discord_invite_stage_instance *self); static void discord_invite_stage_instance_cleanup(struct discord_invite_stage_instance *self);
 
   
 
   
   
   


   
   
 
   
 

static void discord_delete_invite_init(struct discord_delete_invite *self); static void discord_delete_invite_cleanup(struct discord_delete_invite *self);
   











   
   
   
   
   
   
   
   
   
   
   
   
   


   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   


   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   


   
   
   
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static void discord_message_activity_init(struct discord_message_activity *self); static void discord_message_activity_cleanup(struct discord_message_activity *self);
   
   

static void discord_message_reference_init(struct discord_message_reference *self); static void discord_message_reference_cleanup(struct discord_message_reference *self);
   
   
   
   


   
   

static void discord_reaction_init(struct discord_reaction *self); static void discord_reaction_cleanup(struct discord_reaction *self);
   
   
   

static void discord_reactions_cleanup(struct discord_reactions *self);
   

static void discord_overwrite_init(struct discord_overwrite *self); static void discord_overwrite_cleanup(struct discord_overwrite *self);
   
   
   
   

static void discord_overwrites_cleanup(struct discord_overwrites *self);
   

static void discord_thread_metadata_init(struct discord_thread_metadata *self); static void discord_thread_metadata_cleanup(struct discord_thread_metadata *self);
   
   
   
   
   
   


   
   
   
   
   


   

static void discord_attachment_init(struct discord_attachment *self); static void discord_attachment_cleanup(struct discord_attachment *self);
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   


   


   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   


   
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 


   
   
   


   

static void discord_channel_mention_init(struct discord_channel_mention *self); static void discord_channel_mention_cleanup(struct discord_channel_mention *self);
   
   
   
   

static void discord_allowed_mention_init(struct discord_allowed_mention *self); static void discord_allowed_mention_cleanup(struct discord_allowed_mention *self);
   
   
   
   


   
   
   


   
   
   
 
   
 
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
 
   
 
   
   

static void discord_delete_channel_init(struct discord_delete_channel *self); static void discord_delete_channel_cleanup(struct discord_delete_channel *self);
   

static void discord_get_channel_messages_init(struct discord_get_channel_messages *self); static void discord_get_channel_messages_cleanup(struct discord_get_channel_messages *self);
 
   
 
 
   
 
 
   
 
 
   
 


   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_get_reactions_init(struct discord_get_reactions *self); static void discord_get_reactions_cleanup(struct discord_get_reactions *self);
 
   
 
 
   
 


   
   
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_delete_message_init(struct discord_delete_message *self); static void discord_delete_message_cleanup(struct discord_delete_message *self);
   


   
   


   
 
   
 
 
   
 
   


   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_delete_channel_permission_init(struct discord_delete_channel_permission *self); static void discord_delete_channel_permission_cleanup(struct discord_delete_channel_permission *self);
   


 
   
 

static void discord_pin_message_init(struct discord_pin_message *self); static void discord_pin_message_cleanup(struct discord_pin_message *self);
   

static void discord_unpin_message_init(struct discord_unpin_message *self); static void discord_unpin_message_cleanup(struct discord_unpin_message *self);
   


   
   


   
   
 
   
 
 
   
 


   
   
 
   
 
   
   
 
   
 


 
   
 
 
   
 
   


   
   
 
   
 
 
   
 
   
   
   
   


   


   
   
   
 
   
 


   
   
   
 
   
 

static void discord_delete_guild_emoji_init(struct discord_delete_guild_emoji *self); static void discord_delete_guild_emoji_cleanup(struct discord_delete_guild_emoji *self);
   






   
   


   
   
   


   
   


   
   
   
   
   


   
   
   
   


   
   
   
   


   
   


   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
   


   


   
   
   
   
   
   
   
   
   
   
   


   
   
   


   
   
   
   
   
   


 
   
 
 
   
 
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   
   


   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static void discord_integration_account_init(struct discord_integration_account *self); static void discord_integration_account_cleanup(struct discord_integration_account *self);
   
   

static void discord_integration_application_init(struct discord_integration_application *self); static void discord_integration_application_cleanup(struct discord_integration_application *self);
   
   
   
   
   
 
   
 


   
   


   


   
 
   
 

static void discord_welcome_screen_channel_init(struct discord_welcome_screen_channel *self); static void discord_welcome_screen_channel_cleanup(struct discord_welcome_screen_channel *self);
   
   
   
   

static void discord_welcome_screen_channels_cleanup(struct discord_welcome_screen_channels *self);
   


   


   
   
 
   
 
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
   
   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
 
   
 
 
   
 
   
   
   
 
   
 
   

static void discord_modify_guild_channel_position_init(struct discord_modify_guild_channel_position *self); static void discord_modify_guild_channel_position_cleanup(struct discord_modify_guild_channel_position *self);
   
 
   
 
   
 
   
 


   


   
   

static void discord_list_guild_members_init(struct discord_list_guild_members *self); static void discord_list_guild_members_cleanup(struct discord_list_guild_members *self);
   
   

static void discord_search_guild_members_init(struct discord_search_guild_members *self); static void discord_search_guild_members_cleanup(struct discord_search_guild_members *self);
   
   


   
   
   
   
   


   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 


   
 
   
 

static void discord_add_guild_member_role_init(struct discord_add_guild_member_role *self); static void discord_add_guild_member_role_cleanup(struct discord_add_guild_member_role *self);
   

static void discord_remove_guild_member_role_init(struct discord_remove_guild_member_role *self); static void discord_remove_guild_member_role_cleanup(struct discord_remove_guild_member_role *self);
   

static void discord_remove_guild_member_init(struct discord_remove_guild_member *self); static void discord_remove_guild_member_cleanup(struct discord_remove_guild_member *self);
   


   
 
   
 

static void discord_remove_guild_ban_init(struct discord_remove_guild_ban *self); static void discord_remove_guild_ban_cleanup(struct discord_remove_guild_ban *self);
   


   
   
   
   
   
   
   
   

static void discord_modify_guild_role_position_init(struct discord_modify_guild_role_position *self); static void discord_modify_guild_role_position_cleanup(struct discord_modify_guild_role_position *self);
   
 
   
 


   


   
   
   
   
   
   
   
   

static void discord_delete_guild_role_init(struct discord_delete_guild_role *self); static void discord_delete_guild_role_cleanup(struct discord_delete_guild_role *self);
   

static void discord_get_guild_prune_count_init(struct discord_get_guild_prune_count *self); static void discord_get_guild_prune_count_cleanup(struct discord_get_guild_prune_count *self);
 
   
 
   


   
 
   
 
   
   

static void discord_delete_guild_integrations_init(struct discord_delete_guild_integrations *self); static void discord_delete_guild_integrations_cleanup(struct discord_delete_guild_integrations *self);
   
 
   
 
   

static void discord_get_guild_widget_image_init(struct discord_get_guild_widget_image *self); static void discord_get_guild_widget_image_cleanup(struct discord_get_guild_widget_image *self);
 
   
 


   
   
   
 
   
 


   
   
 
   
 


   
   


   


   
   
   


   
   
   
   


   
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
   

static void discord_guild_scheduled_event_entity_metadata_init(struct discord_guild_scheduled_event_entity_metadata *self); static void discord_guild_scheduled_event_entity_metadata_cleanup(struct discord_guild_scheduled_event_entity_metadata *self);
 
   
 


   

static void discord_guild_scheduled_event_user_init(struct discord_guild_scheduled_event_user *self); static void discord_guild_scheduled_event_user_cleanup(struct discord_guild_scheduled_event_user *self);
   
 
   
 
 
   
 


   

static void discord_list_guild_scheduled_events_init(struct discord_list_guild_scheduled_events *self); static void discord_list_guild_scheduled_events_cleanup(struct discord_list_guild_scheduled_events *self);
   


   
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_get_guild_scheduled_event_init(struct discord_get_guild_scheduled_event *self); static void discord_get_guild_scheduled_event_cleanup(struct discord_get_guild_scheduled_event *self);
   


   
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_get_guild_scheduled_event_users_init(struct discord_get_guild_scheduled_event_users *self); static void discord_get_guild_scheduled_event_users_cleanup(struct discord_get_guild_scheduled_event_users *self);
   
   
 
   
 
 
   
 


   
   
   
   
   
   
   
   
   
   
   


   


   
 
   
 


   
 
   
 


 
   
 
 
   
 


   
   


   
   
   
   
 
   
 
   

static void discord_stage_instances_cleanup(struct discord_stage_instances *self);
   


   
   
   
 
   
 


   
   
 
   
 

static void discord_delete_stage_instance_init(struct discord_delete_stage_instance *self); static void discord_delete_stage_instance_cleanup(struct discord_delete_stage_instance *self);
   


   
   


   
   
   


   
 
   
 
   
   
   
 
   
 
 
   
 
   
 
   
 
 
   
 
   


   

static void discord_sticker_item_init(struct discord_sticker_item *self); static void discord_sticker_item_cleanup(struct discord_sticker_item *self);
   
   
 
   
 

static void discord_sticker_items_cleanup(struct discord_sticker_items *self);
   

static void discord_sticker_pack_init(struct discord_sticker_pack *self); static void discord_sticker_pack_cleanup(struct discord_sticker_pack *self);
   
 
   
 
   
   
 
   
 
   
 
   
 


   


   

static void discord_create_guild_sticker_init(struct discord_create_guild_sticker *self); static void discord_create_guild_sticker_cleanup(struct discord_create_guild_sticker *self);
   
   
   
   
   


   
   
   

static void discord_delete_guild_sticker_init(struct discord_delete_guild_sticker *self); static void discord_delete_guild_sticker_cleanup(struct discord_delete_guild_sticker *self);
   

















   
   
   


   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static void discord_connection_init(struct discord_connection *self); static void discord_connection_cleanup(struct discord_connection *self);
   
   
   
   
 
   
 
   
   
   
   


   


 
   
 
 
   
 

static void discord_get_current_user_guilds_init(struct discord_get_current_user_guilds *self); static void discord_get_current_user_guilds_cleanup(struct discord_get_current_user_guilds *self);
 
   
 
 
   
 
 
   
 


 
   
 


 
   
 
 
   
 


   
   
   
   
   
   
   
   
   
   
   
   
 
   
 


   

static void discord_voice_region_init(struct discord_voice_region *self); static void discord_voice_region_cleanup(struct discord_voice_region *self);
   
   
   
   
   


   


   
   
   


   
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   


   


   
   
 
   
 


   
   
 
   
 
   

static void discord_delete_webhook_init(struct discord_delete_webhook *self); static void discord_delete_webhook_cleanup(struct discord_delete_webhook *self);
   


   
 
   
 


   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_get_webhook_message_init(struct discord_get_webhook_message *self); static void discord_get_webhook_message_cleanup(struct discord_get_webhook_message *self);
 
   
 


   
   
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_delete_webhook_message_init(struct discord_delete_webhook_message *self); static void discord_delete_webhook_message_cleanup(struct discord_delete_webhook_message *self);
 
   
 






























   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   

static void discord_activity_init(struct discord_activity *self); static void discord_activity_cleanup(struct discord_activity *self);
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 

static void discord_activities_cleanup(struct discord_activities *self);
   

static void discord_activity_timestamps_init(struct discord_activity_timestamps *self); static void discord_activity_timestamps_cleanup(struct discord_activity_timestamps *self);
   
   

static void discord_activity_emoji_init(struct discord_activity_emoji *self); static void discord_activity_emoji_cleanup(struct discord_activity_emoji *self);
   
   
   

static void discord_activity_party_init(struct discord_activity_party *self); static void discord_activity_party_cleanup(struct discord_activity_party *self);
   
   

static void discord_activity_assets_init(struct discord_activity_assets *self); static void discord_activity_assets_cleanup(struct discord_activity_assets *self);
   
   
   
   

static void discord_activity_secrets_init(struct discord_activity_secrets *self); static void discord_activity_secrets_cleanup(struct discord_activity_secrets *self);
   
   
   

static void discord_activity_button_init(struct discord_activity_button *self); static void discord_activity_button_cleanup(struct discord_activity_button *self);
   
   

static void discord_activity_buttons_cleanup(struct discord_activity_buttons *self);
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   

static void discord_client_status_init(struct discord_client_status *self); static void discord_client_status_cleanup(struct discord_client_status *self);
   
   
   

static void discord_presence_updates_cleanup(struct discord_presence_updates *self);
   


   
   
   
   
 
   
 
 
   
 
   

static void discord_identify_connection_init(struct discord_identify_connection *self); static void discord_identify_connection_cleanup(struct discord_identify_connection *self);
   
   
   


   
   
   


   
   
   
   
 
   
 
 
   
 


   
   
   
   


   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   


   
   
   
   


   
   
   
   
   


   
   
   


   
   


   
   


   
   


   
   


   


   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   


   
   


   
   


   
   


   
   
   


   
   
   


   
   
   


   
   
   
   
   
   
   
   
   
   
   
   


   
   
   


   
   
   


   
   
   


   
   
   
   
   
   


   
   
   
   
   


   
   
   


   
   
   
   


   
   
   
   
   


   
   
   


   
   


   
   
   
   


   
   
   
   











































   
   
   
   
 
   
 
 
   
 
   
   
   
   
 
   
 


   

static void discord_role_tag_init(struct discord_role_tag *self); static void discord_role_tag_cleanup(struct discord_role_tag *self);
 
   
 
 
   
 
   


   
   


   
   
 
   
 
   
   

static void discord_team_member_init(struct discord_team_member *self); static void discord_team_member_cleanup(struct discord_team_member *self);
   
 
   
 
   
 
   
 

static void discord_team_members_cleanup(struct discord_team_members *self);
   





   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   
   
   


   
   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   

static void discord_application_command_option_init(struct discord_application_command_option *self); static void discord_application_command_option_cleanup(struct discord_application_command_option *self);
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static void discord_application_command_options_cleanup(struct discord_application_command_options *self);
   

static void discord_application_command_option_choice_init(struct discord_application_command_option_choice *self); static void discord_application_command_option_choice_cleanup(struct discord_application_command_option_choice *self);
   
   

static void discord_application_command_option_choices_cleanup(struct discord_application_command_option_choices *self);
   

static void discord_application_command_interaction_data_option_init(struct discord_application_command_interaction_data_option *self); static void discord_application_command_interaction_data_option_cleanup(struct discord_application_command_interaction_data_option *self);
   
   
 
   
 
 
   
 
   

static void discord_application_command_interaction_data_options_cleanup(struct discord_application_command_interaction_data_options *self);
   

static void discord_guild_application_command_permission_init(struct discord_guild_application_command_permission *self); static void discord_guild_application_command_permission_cleanup(struct discord_guild_application_command_permission *self);
   
   
   
   


   


   
   
   


   


   
   
 
   
 
 
   
 
   
   
 
   
 


   
   
 
   
 
 
   
 
   
   


   
   
 
   
 
 
   
 
   
   
 
   
 


   
   
 
   
 
 
   
 
   


   
   
   
   
   
 
   
 
 
   
 
   
 
   
 


   
   
   
   


   
   
   
   
   
   
   


 
   
 
   
   
 
   
 
   
 
   
 
   
 
   
 
   
 
   
 
 
   
 
 
   
 
   
   
   
   


   

static void discord_select_option_init(struct discord_select_option *self); static void discord_select_option_cleanup(struct discord_select_option *self);
   
   
   
 
   
 
   


   


   
   
   
   
   


   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   
   
   
   

static void discord_interaction_data_init(struct discord_interaction_data *self); static void discord_interaction_data_cleanup(struct discord_interaction_data *self);
   
   
   
   
   
   
   
   
   
   

static void discord_resolved_data_init(struct discord_resolved_data *self); static void discord_resolved_data_cleanup(struct discord_resolved_data *self);
   
   
   
   
   
   

static void discord_message_interaction_init(struct discord_message_interaction *self); static void discord_message_interaction_cleanup(struct discord_message_interaction *self);
   
   
   
   
   


   
 
   
 

static void discord_interaction_callback_data_init(struct discord_interaction_callback_data *self); static void discord_interaction_callback_data_cleanup(struct discord_interaction_callback_data *self);
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   


   
   
 
   
 
 
   
 
 
   
 
 
   
 


   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
   
 
   
 
 
   
 
 
   
 
 
   
 


   


   


   


   


   










   
   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
 
   
 
   
   
   
   
   


   
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static long discord_audit_log_entry_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_entry *self);
   
 
   
 
   
   
 
   
 
 
   
 
   

static long discord_audit_log_entries_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_entries *self);
   

static long discord_optional_audit_entry_info_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_optional_audit_entry_info *self);
   
   
   
   
   
   
   
   

static long discord_optional_audit_entry_infos_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_optional_audit_entry_infos *self);
   

static long discord_audit_log_change_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_change *self);
   
   
   

static long discord_audit_log_changes_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_changes *self);
   

static long discord_auto_moderation_trigger_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_trigger_metadata *self);
   
   

static long discord_auto_moderation_action_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_action *self);
 
   
 
 
   
 

static long discord_auto_moderation_actions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_actions *self);
   

static long discord_auto_moderation_action_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_action_metadata *self);
 
   
 
 
   
 


   
   
   
   
 
   
 
 
   
 
   
   
   
   
   


   


   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 


 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 


   
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 
 
   
 
 
   
 


   

static long discord_invite_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invite_metadata *self);
   
   
   
   
 
   
 

static long discord_invite_stage_instance_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invite_stage_instance *self);
 
   
 
   
   
   


   
   
 
   
 











   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   


   
   
   
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static long discord_message_activity_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_activity *self);
   
   

static long discord_message_reference_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_reference *self);
   
   
   
   


   
   

static long discord_reaction_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_reaction *self);
   
   
   

static long discord_reactions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_reactions *self);
   

static long discord_overwrite_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_overwrite *self);
   
   
   
   

static long discord_overwrites_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_overwrites *self);
   

static long discord_thread_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_thread_metadata *self);
   
   
   
   
   
   


   
   
   
   
   


   

static long discord_attachment_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_attachment *self);
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   


   


   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   


   
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 


   
   
   


   

static long discord_channel_mention_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_channel_mention *self);
   
   
   
   

static long discord_allowed_mention_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_allowed_mention *self);
   
   
   
   


   
   
   


   
   
 
   
 
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
 
   
 
   
   


   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
   
 
   
 
 
   
 
 
   
 
 
   
 


   


 
   
 
 
   
 
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


 
   
 


   
   


   
 
   
 
 
   
 


   
 
   
 
   
   
 
   
 


 
   
 
 
   
 
   


   
   
 
   
 
 
   
 
   
   
   
   


   


   
   
 
   
 


   
   
 
   
 






   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
   


   


   
   
   
   
   
   
   
   
   
   
   


   
   


   
   
   
   
   
   


 
   
 
 
   
 
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   
   


   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static long discord_integration_account_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_integration_account *self);
   
   

static long discord_integration_application_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_integration_application *self);
   
   
   
   
   
 
   
 


   
   


   


   
 
   
 

static long discord_welcome_screen_channel_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_welcome_screen_channel *self);
   
   
   
   

static long discord_welcome_screen_channels_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_welcome_screen_channels *self);
   


   


   
 
   
 
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
   
   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
 
   
 
 
   
 
   
   
   
 
   
 
   

static long discord_modify_guild_channel_position_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_channel_position *self);
   
 
   
 
   
 
   
 


   


   
   


   
   
   
   
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


 
   
 


 
   
 


 
   
 


   
   
   
   
   
   
   

static long discord_modify_guild_role_position_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_role_position *self);
   
 
   
 


   


   
   
   
   
   
   
   


 
   
 
   
   


   
   
 
   
 


   
   
 
   
 


   
   


   
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
   

static long discord_guild_scheduled_event_entity_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event_entity_metadata *self);
 
   
 


   

static long discord_guild_scheduled_event_user_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event_user *self);
   
 
   
 
 
   
 


   


 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
   
   
   
   
   
   
   
   
   
   


   


   
 
   
 


   
 
   
 


 
   
 
 
   
 


   
   
   
   
 
   
 
   

static long discord_stage_instances_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_stage_instances *self);
   


   
   
 
   
 


   
 
   
 


   
 
   
 
   
   
   
 
   
 
 
   
 
   
 
   
 
 
   
 
   


   

static long discord_sticker_item_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker_item *self);
   
   
 
   
 

static long discord_sticker_items_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker_items *self);
   

static long discord_sticker_pack_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker_pack *self);
   
 
   
 
   
   
 
   
 
   
 
   
 


   


   


   
   
   

















   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static long discord_connection_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_connection *self);
   
   
   
   
 
   
 
   
   
   
   


   


 
   
 
 
   
 


 
   
 


 
   
 
 
   
 


   
   
   
   
   
   
   
   
   
   
   
   
 
   
 


   

static long discord_voice_region_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_voice_region *self);
   
   
   
   
   


   


   
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   


   


   
 
   
 


   
 
   
 
   


   
 
   
 


   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 
 
   
 





























static long discord_activity_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity *self);
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 

static long discord_activities_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activities *self);
   

static long discord_activity_timestamps_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_timestamps *self);
   
   

static long discord_activity_emoji_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_emoji *self);
   
   
   

static long discord_activity_party_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_party *self);
   
   

static long discord_activity_assets_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_assets *self);
   
   
   
   

static long discord_activity_secrets_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_secrets *self);
   
   
   

static long discord_activity_button_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_button *self);
   
   

static long discord_activity_buttons_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_buttons *self);
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   

static long discord_client_status_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_client_status *self);
   
   
   

static long discord_presence_updates_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_presence_updates *self);
   


   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   


   
   
   
   


   
   
   
   
   


   
   
   


   
   


   
   


   
   


   
   


   


   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   


   
   


   
   


   
   


   
   
   


   
   
   


   
   
   


   
   
   
   
   
   
   
   
   
   
   
   


   
   
   


   
   
   


   
   
   


   
   
   
   
   
   


   
   
   
   
   


   
   
   


   
   
   
   


   
   
   
   
   


   
   
   


   
   


   
   
   
   


   
   
   
   











































   
   
   
   
 
   
 
 
   
 
   
   
   
   
 
   
 


   

static long discord_role_tag_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_role_tag *self);
 
   
 
 
   
 
   


   
   
 
   
 
   
   

static long discord_team_member_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_team_member *self);
   
 
   
 
   
 
   
 

static long discord_team_members_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_team_members *self);
   





 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   

static long discord_application_command_option_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_option *self);
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static long discord_application_command_options_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_options *self);
   

static long discord_application_command_option_choice_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_option_choice *self);
   
   

static long discord_application_command_option_choices_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_option_choices *self);
   

static long discord_application_command_interaction_data_option_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_interaction_data_option *self);
   
   
 
   
 
 
   
 
   

static long discord_application_command_interaction_data_options_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_interaction_data_options *self);
   

static long discord_guild_application_command_permission_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_application_command_permission *self);
   
   
   
   


   


   
   
   


   


   
   
 
   
 
 
   
 
   
   
 
   
 


   
   
 
   
 
 
   
 
   
   


   
   
 
   
 
 
   
 
   
   
 
   
 


   
   
 
   
 
 
   
 
   


   
   
   
   
   
 
   
 
 
   
 
   
 
   
 


 
   
 
   
   
 
   
 
   
 
   
 
   
 
   
 
   
 
   
 
 
   
 
 
   
 
   
   
   
   


   

static long discord_select_option_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_select_option *self);
   
   
   
 
   
 
   


   


   
   
   
   
   
   
   
   
   
   
   
   
   

static long discord_interaction_data_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_interaction_data *self);
   
   
   
   
   
   
   
   
   
   

static long discord_resolved_data_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_resolved_data *self);
   
   
   
   
   
   

static long discord_message_interaction_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_interaction *self);
   
   
   
   
   


   
 
   
 

static long discord_interaction_callback_data_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_interaction_callback_data *self);
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   


   
 
   
 
 
   
 
 
   
 
 
   
 


   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 
 
   
 


   


   


   


   


   










   
   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
 
   
 
   
   
   
   
   


   
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static jsonbcode discord_audit_log_entry_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_entry *self);
   
 
   
 
   
   
 
   
 
 
   
 
   

static jsonbcode discord_audit_log_entries_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_entries *self);
   

static jsonbcode discord_optional_audit_entry_info_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_optional_audit_entry_info *self);
   
   
   
   
   
   
   
   

static jsonbcode discord_optional_audit_entry_infos_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_optional_audit_entry_infos *self);
   

static jsonbcode discord_audit_log_change_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_change *self);
   
   
   

static jsonbcode discord_audit_log_changes_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_changes *self);
   

static jsonbcode discord_auto_moderation_trigger_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_trigger_metadata *self);
   
   

static jsonbcode discord_auto_moderation_action_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_action *self);
 
   
 
 
   
 

static jsonbcode discord_auto_moderation_actions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_actions *self);
   

static jsonbcode discord_auto_moderation_action_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_action_metadata *self);
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 


 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 


   
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 
 
   
 
 
   
 


   

static jsonbcode discord_invite_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_invite_metadata *self);
   
   
   
   
 
   
 

static jsonbcode discord_invite_stage_instance_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_invite_stage_instance *self);
 
   
 
   
   
   


   
   
 
   
 











   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   


   
   
   
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static jsonbcode discord_message_activity_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_message_activity *self);
   
   

static jsonbcode discord_message_reference_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_message_reference *self);
   
   
   
   


   
   

static jsonbcode discord_reaction_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_reaction *self);
   
   
   

static jsonbcode discord_reactions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_reactions *self);
   

static jsonbcode discord_overwrite_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_overwrite *self);
   
   
   
   

static jsonbcode discord_overwrites_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_overwrites *self);
   

static jsonbcode discord_thread_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_thread_metadata *self);
   
   
   
   
   
   


   
   
   
   
   


   

static jsonbcode discord_attachment_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_attachment *self);
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   


   


   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   


   
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 


   
   
   


   

static jsonbcode discord_channel_mention_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_channel_mention *self);
   
   
   
   

static jsonbcode discord_allowed_mention_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_allowed_mention *self);
   
   
   
   


   
   
   


   
   
 
   
 
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
 
   
 
   
   


   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
   
 
   
 
 
   
 
 
   
 
 
   
 


   


 
   
 
 
   
 
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


 
   
 


   
   


   
 
   
 
 
   
 


   
 
   
 
   
   
 
   
 


 
   
 
 
   
 
   


   
   
 
   
 
 
   
 
   
   
   
   


   


   
   
 
   
 


   
   
 
   
 






   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
   


   


   
   
   
   
   
   
   
   
   
   
   


   
   


   
   
   
   
   
   


 
   
 
 
   
 
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   
   


   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static jsonbcode discord_integration_account_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_integration_account *self);
   
   

static jsonbcode discord_integration_application_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_integration_application *self);
   
   
   
   
   
 
   
 


   
   


   


   
 
   
 

static jsonbcode discord_welcome_screen_channel_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_welcome_screen_channel *self);
   
   
   
   

static jsonbcode discord_welcome_screen_channels_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_welcome_screen_channels *self);
   


   


   
 
   
 
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
   
   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
 
   
 
 
   
 
   
   
   
 
   
 
   

static jsonbcode discord_modify_guild_channel_position_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_channel_position *self);
   
 
   
 
   
 
   
 


   


   
   


   
   
   
   
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


 
   
 


 
   
 


 
   
 


   
   
   
   
   
   
   

static jsonbcode discord_modify_guild_role_position_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_role_position *self);
   
 
   
 


   


   
   
   
   
   
   
   


 
   
 
   
   


   
   
 
   
 


   
   
 
   
 


   
   


   
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
   

static jsonbcode discord_guild_scheduled_event_entity_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_scheduled_event_entity_metadata *self);
 
   
 


   

static jsonbcode discord_guild_scheduled_event_user_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_scheduled_event_user *self);
   
 
   
 
 
   
 


   


 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
   
   
   
   
   
   
   
   
   
   


   


   
 
   
 


   
 
   
 


 
   
 
 
   
 


   
   
   
   
 
   
 
   

static jsonbcode discord_stage_instances_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_stage_instances *self);
   


   
 
   
 
   
   
   
 
   
 
 
   
 
   
 
   
 
 
   
 
   


   

static jsonbcode discord_sticker_item_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker_item *self);
   
   
 
   
 

static jsonbcode discord_sticker_items_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker_items *self);
   

static jsonbcode discord_sticker_pack_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker_pack *self);
   
 
   
 
   
   
 
   
 
   
 
   
 


   


   
   
   

















   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   

static jsonbcode discord_connection_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_connection *self);
   
   
   
   
 
   
 
   
   
   
   


   


 
   
 
 
   
 


 
   
 


 
   
 
 
   
 


   
   
   
   
   
   
   
   
   
   
   
   
 
   
 


   

static jsonbcode discord_voice_region_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_voice_region *self);
   
   
   
   
   


   


   
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   


   


   
 
   
 


   
 
   
 
   


   
 
   
 


   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 
 
   
 





























static jsonbcode discord_activity_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity *self);
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 

static jsonbcode discord_activities_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activities *self);
   

static jsonbcode discord_activity_timestamps_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_timestamps *self);
   
   

static jsonbcode discord_activity_emoji_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_emoji *self);
   
   
   

static jsonbcode discord_activity_party_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_party *self);
   
   

static jsonbcode discord_activity_assets_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_assets *self);
   
   
   
   

static jsonbcode discord_activity_secrets_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_secrets *self);
   
   
   

static jsonbcode discord_activity_button_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_button *self);
   
   

static jsonbcode discord_activity_buttons_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_buttons *self);
   


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   

static jsonbcode discord_client_status_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_client_status *self);
   
   
   

static jsonbcode discord_presence_updates_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_presence_updates *self);
   


   
   
   
   
 
   
 
 
   
 
   

static jsonbcode discord_identify_connection_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_identify_connection *self);
   
   
   


   
   
   


   
   
   
   
 
   
 
 
   
 


   
   
   
   


   
   
   
   











































   
   
   
   
 
   
 
 
   
 
   
   
   
   
 
   
 


   

static jsonbcode discord_role_tag_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_role_tag *self);
 
   
 
 
   
 
   


   
   
 
   
 
   
   

static jsonbcode discord_team_member_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_team_member *self);
   
 
   
 
   
 
   
 

static jsonbcode discord_team_members_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_team_members *self);
   





 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   

static jsonbcode discord_application_command_option_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_option *self);
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

static jsonbcode discord_application_command_options_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_options *self);
   

static jsonbcode discord_application_command_option_choice_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_option_choice *self);
   
   

static jsonbcode discord_application_command_option_choices_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_option_choices *self);
   

static jsonbcode discord_application_command_interaction_data_option_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_interaction_data_option *self);
   
   
 
   
 
 
   
 
   

static jsonbcode discord_application_command_interaction_data_options_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_interaction_data_options *self);
   

static jsonbcode discord_guild_application_command_permission_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_application_command_permission *self);
   
   
   
   


   


   
   
   


   


   
   
 
   
 
 
   
 
   
   
 
   
 


   
   
 
   
 
 
   
 
   
   


   
   
 
   
 
 
   
 
   
   
 
   
 


   
   
 
   
 
 
   
 
   


   
   
   
   
   
 
   
 
 
   
 
   
 
   
 


 
   
 
   
   
 
   
 
   
 
   
 
   
 
   
 
   
 
   
 
 
   
 
 
   
 
   
   
   
   


   

static jsonbcode discord_select_option_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_select_option *self);
   
   
   
 
   
 
   


   


   
   
   
   
   
   
   
   
   
   
   
   
   

static jsonbcode discord_interaction_data_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_interaction_data *self);
   
   
   
   
   
   
   
   
   
   

static jsonbcode discord_resolved_data_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_resolved_data *self);
   
   
   
   
   
   

static jsonbcode discord_message_interaction_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_message_interaction *self);
   
   
   
   
   


   
 
   
 

static jsonbcode discord_interaction_callback_data_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_interaction_callback_data *self);
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   


   
 
   
 
 
   
 
 
   
 
 
   
 


   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
 
   
 
 
   
 
 
   
 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "carray.h"

   


   


   


   


   









void discord_application_init(struct discord_application *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->icon = NULL;
    self->description = NULL;
 
    self->rpc_origins = NULL;
 
    self->bot_public = false;
    self->bot_require_code_grant = false;
    self->terms_of_service_url = NULL;
    self->privacy_policy_url = NULL;
 
    self->owner = NULL;
 
    self->summary = NULL;
    self->verify_key = NULL;
 
    self->team = NULL;
 
    self->guild_id = (u64snowflake)0;
    self->primary_sku_id = (u64snowflake)0;
    self->slug = NULL;
    self->cover_image = NULL;
    self->flags = (u64bitmask)0;
}
void discord_install_params_init(struct discord_install_params *self) {
    self->scopes = NULL;
    self->permissions = (u64bitmask)0;
}

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

void discord_audit_log_init(struct discord_audit_log *self) {
 
    self->audit_log_entries = NULL;
 
 
    self->guild_scheduled_events = NULL;
 
 
    self->integrations = NULL;
 
 
    self->threads = NULL;
 
 
    self->users = NULL;
 
 
    self->webhooks = NULL;
 
}
static void discord_audit_log_entry_init(struct discord_audit_log_entry *self) {
    self->target_id = (u64snowflake)0;
 
    self->changes = NULL;
 
    self->user_id = (u64snowflake)0;
    self->id = (u64snowflake)0;
 
    self->action_type = 0;
 
 
    self->options = NULL;
 
    self->reason = NULL;
}

   

static void discord_optional_audit_entry_info_init(struct discord_optional_audit_entry_info *self) {
    self->channel_id = (u64snowflake)0;
    self->count = NULL;
    self->delete_member_days = NULL;
    self->id = (u64snowflake)0;
    self->members_removed = NULL;
    self->message_id = (u64snowflake)0;
    self->role_name = NULL;
    self->type = NULL;
}

   

static void discord_audit_log_change_init(struct discord_audit_log_change *self) {
    self->new_value = NULL;
    self->old_value = NULL;
    self->key = NULL;
}

   

static void discord_get_guild_audit_log_init(struct discord_get_guild_audit_log *self) {
    self->user_id = (u64snowflake)0;
    self->action_type = 0;
    self->before = (u64snowflake)0;
 
    self->limit = 50;
 
}

   
   
   
   


   
   
   


   


   
   
   

static void discord_auto_moderation_trigger_metadata_init(struct discord_auto_moderation_trigger_metadata *self) {
    self->keyword_filter = NULL;
    self->presets = NULL;
}
static void discord_auto_moderation_action_init(struct discord_auto_moderation_action *self) {
 
    self->type = 0;
 
 
    self->metadata = NULL;
 
}

   

static void discord_auto_moderation_action_metadata_init(struct discord_auto_moderation_action_metadata *self) {
 
    self->channel_id = (u64snowflake)0;
 
 
    self->duration_seconds = 0;
 
}
void discord_auto_moderation_rule_init(struct discord_auto_moderation_rule *self) {
    self->id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->name = NULL;
    self->creator_id = (u64snowflake)0;
 
    self->event_type = 0;
 
 
    self->trigger_type = 0;
 
    self->actions = NULL;
    self->trigger_metadata = NULL;
    self->enabled = false;
    self->exempt_roles = NULL;
    self->exempt_channels = NULL;
}

   

void discord_create_auto_moderation_rule_init(struct discord_create_auto_moderation_rule *self) {
    self->reason = NULL;
    self->name = NULL;
 
    self->event_type = 0;
 
 
    self->trigger_type = 0;
 
 
    self->actions = NULL;
 
 
    self->trigger_metadata = NULL;
 
    self->enabled = false;
 
    self->exempt_roles = NULL;
 
 
    self->exempt_channels = NULL;
 
}
void discord_modify_auto_moderation_rule_init(struct discord_modify_auto_moderation_rule *self) {
    self->reason = NULL;
 
    self->name = NULL;
 
 
    self->event_type = 0;
 
 
    self->trigger_metadata = NULL;
 
 
    self->actions = NULL;
 
    self->enabled = false;
 
    self->exempt_roles = NULL;
 
 
    self->exempt_channels = NULL;
 
}
static void discord_delete_auto_moderation_rule_init(struct discord_delete_auto_moderation_rule *self) {
    self->reason = NULL;
}

   
   

void discord_invite_init(struct discord_invite *self) {
    self->code = NULL;
 
    self->guild = NULL;
 
    self->channel = NULL;
 
    self->inviter = NULL;
 
 
    self->target_type = 0;
 
 
    self->target_user = NULL;
 
 
    self->target_application = NULL;
 
    self->approximate_presence_count = 0;
    self->approximate_member_count = 0;
 
    self->expires_at = (u64unix_ms)0;
 
 
    self->stage_instance = NULL;
 
 
    self->guild_scheduled_event = NULL;
 
}

   

static void discord_invite_metadata_init(struct discord_invite_metadata *self) {
    self->uses = 0;
    self->max_uses = 0;
    self->max_age = 0;
    self->temporary = false;
 
    self->created_at = (u64unix_ms)0;
 
}
static void discord_invite_stage_instance_init(struct discord_invite_stage_instance *self) {
 
    self->members = NULL;
 
    self->participant_count = 0;
    self->speaker_count = 0;
    self->topic = NULL;
}
void discord_get_invite_init(struct discord_get_invite *self) {
    self->with_counts = false;
    self->with_expiration = false;
 
    self->guild_scheduled_event_id = (u64snowflake)0;
 
}
static void discord_delete_invite_init(struct discord_delete_invite *self) {
    self->reason = NULL;
}










   
   
   
   
   
   
   
   
   
   
   
   
   


   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   

void discord_channel_init(struct discord_channel *self) {
    self->id = (u64snowflake)0;
    self->type = 0;
 
    self->guild_id = (u64snowflake)0;
 
    self->position = 0;
    self->permission_overwrites = NULL;
    self->name = NULL;
    self->topic = NULL;
    self->nsfw = false;
    self->last_message_id = (u64snowflake)0;
    self->bitrate = 0;
    self->user_limit = 0;
    self->rate_limit_per_user = 0;
    self->recipients = NULL;
    self->icon = NULL;
    self->owner_id = (u64snowflake)0;
    self->application_id = (u64snowflake)0;
    self->parent_id = (u64snowflake)0;
    self->last_pin_timestamp = (u64unix_ms)0;
    self->rtc_region = NULL;
    self->voice_quality_mode = 0;
    self->message_count = 0;
    self->member_count = 0;
    self->thread_metadata = NULL;
    self->member = NULL;
    self->default_auto_archive_duration = 0;
    self->permissions = (u64bitmask)0;
}

   

void discord_message_init(struct discord_message *self) {
    self->id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->author = NULL;
    self->member = NULL;
    self->content = NULL;
    self->timestamp = (u64unix_ms)0;
 
    self->edited_timestamp = (u64unix_ms)0;
 
    self->tts = false;
    self->mention_everyone = false;
    self->mentions = NULL;
    self->mention_roles = NULL;
    self->mention_channels = NULL;
    self->attachments = NULL;
    self->embeds = NULL;
    self->reactions = NULL;
    self->nonce = NULL;
    self->pinned = false;
    self->webhook_id = (u64snowflake)0;
    self->type = 0;
    self->activity = NULL;
    self->application = NULL;
    self->application_id = (u64snowflake)0;
    self->message_reference = NULL;
    self->flags = (u64bitmask)0;
    self->referenced_message = NULL;
    self->interaction = NULL;
    self->thread = NULL;
    self->components = NULL;
    self->sticker_items = NULL;
}

   

static void discord_message_activity_init(struct discord_message_activity *self) {
    self->type = 0;
    self->party_id = NULL;
}
static void discord_message_reference_init(struct discord_message_reference *self) {
    self->message_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->fail_if_not_exists = true;
}
void discord_followed_channel_init(struct discord_followed_channel *self) {
    self->channel_id = (u64snowflake)0;
    self->webhook_id = (u64snowflake)0;
}
static void discord_reaction_init(struct discord_reaction *self) {
    self->count = 0;
    self->me = false;
    self->emoji = NULL;
}

   

static void discord_overwrite_init(struct discord_overwrite *self) {
    self->id = (u64snowflake)0;
    self->type = 0;
    self->allow = (u64bitmask)0;
    self->deny = (u64bitmask)0;
}

   

static void discord_thread_metadata_init(struct discord_thread_metadata *self) {
    self->archived = false;
    self->auto_archive_duration = 0;
    self->archive_timestamp = (u64unix_ms)0;
    self->locked = false;
    self->invitable = false;
    self->create_timestamp = (u64unix_ms)0;
}
void discord_thread_member_init(struct discord_thread_member *self) {
    self->id = (u64snowflake)0;
    self->user_id = (u64snowflake)0;
    self->join_timestamp = (u64unix_ms)0;
    self->flags = (u64bitmask)0;
    self->guild_id = (u64snowflake)0;
}

   

static void discord_attachment_init(struct discord_attachment *self) {
    self->content = NULL;
    self->id = (u64snowflake)0;
 
    self->filename = NULL;
 
 
    self->description = NULL;
 
 
    self->content_type = NULL;
 
 
    self->size = 0;
 
 
    self->url = NULL;
 
 
    self->proxy_url = NULL;
 
 
    self->height = 0;
 
 
    self->width = 0;
 
    self->ephemeral = false;
}

   

void discord_embed_init(struct discord_embed *self) {
    self->title = NULL;
    self->type = NULL;
    self->description = NULL;
    self->url = NULL;
 
    self->timestamp = (u64unix_ms)0;
 
 
    self->color = 0;
 
 
    self->footer = NULL;
 
 
    self->image = NULL;
 
 
    self->thumbnail = NULL;
 
 
    self->video = NULL;
 
 
    self->provider = NULL;
 
 
    self->author = NULL;
 
 
    self->fields = NULL;
 
}

   

void discord_embed_thumbnail_init(struct discord_embed_thumbnail *self) {
    self->url = NULL;
 
    self->proxy_url = NULL;
 
 
    self->height = 0;
 
 
    self->width = 0;
 
}
void discord_embed_video_init(struct discord_embed_video *self) {
 
    self->url = NULL;
 
 
    self->proxy_url = NULL;
 
 
    self->height = 0;
 
 
    self->width = 0;
 
}
void discord_embed_image_init(struct discord_embed_image *self) {
    self->url = NULL;
 
    self->proxy_url = NULL;
 
 
    self->height = 0;
 
 
    self->width = 0;
 
}
void discord_embed_provider_init(struct discord_embed_provider *self) {
 
    self->name = NULL;
 
 
    self->url = NULL;
 
}
void discord_embed_author_init(struct discord_embed_author *self) {
    self->name = NULL;
 
    self->url = NULL;
 
 
    self->icon_url = NULL;
 
 
    self->proxy_icon_url = NULL;
 
}
void discord_embed_footer_init(struct discord_embed_footer *self) {
    self->text = NULL;
 
    self->icon_url = NULL;
 
 
    self->proxy_icon_url = NULL;
 
}
void discord_embed_field_init(struct discord_embed_field *self) {
    self->name = NULL;
    self->value = NULL;
    self->Inline = false;
}

   

static void discord_channel_mention_init(struct discord_channel_mention *self) {
    self->id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->type = 0;
    self->name = NULL;
}
static void discord_allowed_mention_init(struct discord_allowed_mention *self) {
    self->parse = NULL;
    self->roles = NULL;
    self->users = NULL;
    self->replied_user = false;
}
void discord_thread_response_body_init(struct discord_thread_response_body *self) {
    self->threads = NULL;
    self->members = NULL;
    self->has_more = false;
}
void discord_modify_channel_init(struct discord_modify_channel *self) {
    self->reason = NULL;
    self->name = NULL;
    self->type = 0;
 
    self->position = 0;
 
    self->topic = NULL;
    self->nsfw = false;
 
    self->rate_limit_per_user = 0;
 
 
    self->user_limit = 0;
 
 
    self->permission_overwrites = NULL;
 
 
    self->parent_id = (u64snowflake)0;
 
    self->rtc_region = NULL;
 
    self->video_quality_mode = 0;
 
 
    self->default_auto_archive_duration = 0;
 
    self->archived = false;
 
    self->auto_archive_duration = 0;
 
    self->locked = false;
    self->invitable = false;
}
static void discord_delete_channel_init(struct discord_delete_channel *self) {
    self->reason = NULL;
}
static void discord_get_channel_messages_init(struct discord_get_channel_messages *self) {
 
    self->around = (u64snowflake)0;
 
 
    self->before = (u64snowflake)0;
 
 
    self->after = (u64snowflake)0;
 
 
    self->limit = 50;
 
}
void discord_create_message_init(struct discord_create_message *self) {
    self->content = NULL;
    self->tts = false;
    self->embeds = NULL;
 
    self->allowed_mentions = NULL;
 
 
    self->message_reference = NULL;
 
 
    self->components = NULL;
 
 
    self->sticker_ids = NULL;
 
 
    self->attachments = NULL;
 
 
    self->flags = (u64bitmask)0;
 
}
static void discord_get_reactions_init(struct discord_get_reactions *self) {
 
    self->after = (u64snowflake)0;
 
 
    self->limit = 0;
 
}
void discord_edit_message_init(struct discord_edit_message *self) {
    self->content = NULL;
    self->embeds = NULL;
 
    self->flags = (u64bitmask)0;
 
 
    self->allowed_mentions = NULL;
 
 
    self->components = NULL;
 
 
    self->attachments = NULL;
 
}
static void discord_delete_message_init(struct discord_delete_message *self) {
    self->reason = NULL;
}
void discord_bulk_delete_messages_init(struct discord_bulk_delete_messages *self) {
    self->reason = NULL;
    self->messages = NULL;
}
void discord_edit_channel_permissions_init(struct discord_edit_channel_permissions *self) {
    self->reason = NULL;
 
    self->allow = (u64bitmask)0;
 
 
    self->deny = (u64bitmask)0;
 
    self->type = 0;
}
void discord_create_channel_invite_init(struct discord_create_channel_invite *self) {
    self->reason = NULL;
 
    self->max_age = 86400;
 
 
    self->max_uses = 0;
 
 
    self->temporary = false;
 
 
    self->unique = false;
 
 
    self->target_type = 0;
 
 
    self->target_user_id = (u64snowflake)0;
 
 
    self->target_application_id = (u64snowflake)0;
 
}
static void discord_delete_channel_permission_init(struct discord_delete_channel_permission *self) {
    self->reason = NULL;
}
void discord_follow_news_channel_init(struct discord_follow_news_channel *self) {
 
    self->webhook_channel_id = (u64snowflake)0;
 
}
static void discord_pin_message_init(struct discord_pin_message *self) {
    self->reason = NULL;
}
static void discord_unpin_message_init(struct discord_unpin_message *self) {
    self->reason = NULL;
}
void discord_group_dm_add_recipient_init(struct discord_group_dm_add_recipient *self) {
    self->access_token = NULL;
    self->nick = NULL;
}
void discord_start_thread_with_message_init(struct discord_start_thread_with_message *self) {
    self->reason = NULL;
    self->name = NULL;
 
    self->auto_archive_duration = 0;
 
 
    self->rate_limit_per_user = 0;
 
}
void discord_start_thread_without_message_init(struct discord_start_thread_without_message *self) {
    self->reason = NULL;
    self->name = NULL;
 
    self->auto_archive_duration = 0;
 
    self->type = 0;
    self->invitable = false;
 
    self->rate_limit_per_user = 0;
 
}
void discord_list_active_threads_init(struct discord_list_active_threads *self) {
 
    self->threads = NULL;
 
 
    self->members = NULL;
 
    self->has_more = false;
}
void discord_emoji_init(struct discord_emoji *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
 
    self->roles = NULL;
 
 
    self->user = NULL;
 
    self->require_colons = false;
    self->managed = false;
    self->animated = false;
    self->available = false;
}

   

void discord_create_guild_emoji_init(struct discord_create_guild_emoji *self) {
    self->reason = NULL;
    self->name = NULL;
    self->image = NULL;
 
    self->roles = NULL;
 
}
void discord_modify_guild_emoji_init(struct discord_modify_guild_emoji *self) {
    self->reason = NULL;
    self->name = NULL;
    self->image = NULL;
 
    self->roles = NULL;
 
}
static void discord_delete_guild_emoji_init(struct discord_delete_guild_emoji *self) {
    self->reason = NULL;
}





   
   


   
   
   


   
   


   
   
   
   
   


   
   
   
   


   
   
   
   


   
   

void discord_guild_init(struct discord_guild *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->icon = NULL;
 
    self->icon_hash = NULL;
 
    self->splash = NULL;
    self->discovery_splash = NULL;
    self->owner = false;
    self->owner_id = (u64snowflake)0;
 
    self->permissions = (u64bitmask)0;
 
    self->afk_channel_id = (u64snowflake)0;
    self->afk_timeout = 0;
    self->widget_enabled = false;
    self->widget_channel_id = (u64snowflake)0;
    self->verification_level = 0;
    self->default_message_notifications = 0;
    self->explicit_content_filter = 0;
    self->roles = NULL;
    self->emojis = NULL;
    self->features = NULL;
    self->mfa_level = 0;
    self->application_id = (u64snowflake)0;
    self->system_channel_id = (u64snowflake)0;
    self->system_channel_flags = (u64bitmask)0;
    self->rules_channel_id = (u64snowflake)0;
 
    self->joined_at = (u64unix_ms)0;
 
    self->large = false;
    self->unavailable = false;
    self->member_count = 0;
 
    self->voice_states = NULL;
 
 
    self->members = NULL;
 
 
    self->channels = NULL;
 
 
    self->threads = NULL;
 
 
    self->presences = NULL;
 
 
    self->max_presences = 0;
 
 
    self->max_members = 0;
 
    self->vanity_url_code = NULL;
    self->description = NULL;
    self->banner = NULL;
    self->premium_tier = 0;
    self->premium_subscription_count = 0;
    self->preferred_locale = NULL;
    self->public_updates_channel_id = (u64snowflake)0;
 
    self->max_video_channel_users = 0;
 
 
    self->approximate_member_count = 0;
 
 
    self->approximate_presence_count = 0;
 
 
    self->welcome_screen = NULL;
 
    self->nsfw_level = 0;
 
    self->stage_instances = NULL;
 
 
    self->stickers = NULL;
 
 
    self->guild_scheduled_events = NULL;
 
    self->premium_progress_bar_enabled = false;
}

   

void discord_guild_preview_init(struct discord_guild_preview *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->icon = NULL;
    self->splash = NULL;
    self->discovery_splash = NULL;
    self->emojis = NULL;
    self->features = NULL;
    self->approximate_member_count = 0;
    self->approximate_presence_count = 0;
    self->description = NULL;
    self->stickers = NULL;
}
void discord_guild_widget_settings_init(struct discord_guild_widget_settings *self) {
    self->reason = NULL;
    self->enabled = false;
    self->channel_id = (u64snowflake)0;
}
void discord_guild_widget_init(struct discord_guild_widget *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->instant_invite = NULL;
    self->channels = NULL;
    self->members = NULL;
    self->presence_count = 0;
}
void discord_guild_member_init(struct discord_guild_member *self) {
 
    self->user = NULL;
 
 
    self->nick = NULL;
 
 
    self->avatar = NULL;
 
    self->roles = NULL;
    self->joined_at = (u64unix_ms)0;
 
    self->premium_since = (u64unix_ms)0;
 
    self->deaf = false;
    self->muted = false;
    self->pending = false;
 
    self->permissions = (u64bitmask)0;
 
    self->communication_disabled_until = (u64unix_ms)0;
    self->guild_id = (u64snowflake)0;
}

   

void discord_integration_init(struct discord_integration *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->type = NULL;
    self->enabled = false;
    self->syncing = false;
    self->role_id = (u64snowflake)0;
    self->enable_emoticons = false;
    self->expire_behavior = 0;
    self->expire_grace_period = 0;
    self->user = NULL;
    self->account = NULL;
    self->synced_at = (u64unix_ms)0;
    self->subscriber_count = 0;
    self->revoked = false;
    self->application = NULL;
    self->guild_id = (u64snowflake)0;
}

   

static void discord_integration_account_init(struct discord_integration_account *self) {
    self->id = NULL;
    self->name = NULL;
}
static void discord_integration_application_init(struct discord_integration_application *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->icon = NULL;
    self->description = NULL;
    self->summary = NULL;
 
    self->bot = NULL;
 
}
void discord_ban_init(struct discord_ban *self) {
    self->reason = NULL;
    self->user = NULL;
}

   

void discord_welcome_screen_init(struct discord_welcome_screen *self) {
    self->description = NULL;
 
    self->welcome_channels = NULL;
 
}
static void discord_welcome_screen_channel_init(struct discord_welcome_screen_channel *self) {
    self->channel_id = (u64snowflake)0;
    self->description = NULL;
    self->emoji_id = (u64snowflake)0;
    self->emoji_name = NULL;
}

   

void discord_prune_count_init(struct discord_prune_count *self) {
    self->pruned = 0;
}
void discord_create_guild_init(struct discord_create_guild *self) {
    self->reason = NULL;
    self->name = NULL;
 
    self->region = NULL;
 
 
    self->icon = NULL;
 
    self->verification_level = 0;
    self->default_message_notifications = 0;
    self->explicit_content_filter = 0;
 
    self->roles = NULL;
 
 
    self->channels = NULL;
 
 
    self->afk_channel_id = (u64snowflake)0;
 
    self->afk_timeout = 0;
    self->system_channel_id = (u64snowflake)0;
    self->system_channel_flags = (u64bitmask)0;
}
void discord_modify_guild_init(struct discord_modify_guild *self) {
    self->reason = NULL;
    self->name = NULL;
    self->verification_level = 0;
    self->default_message_notifications = 0;
    self->explicit_content_filter = 0;
    self->afk_channel_id = (u64snowflake)0;
    self->afk_timeout = 0;
    self->icon = NULL;
    self->owner_id = (u64snowflake)0;
    self->splash = NULL;
    self->discovery_splash = NULL;
    self->banner = NULL;
    self->system_channel_id = (u64snowflake)0;
    self->system_channel_flags = (u64bitmask)0;
    self->rules_channel_id = (u64snowflake)0;
    self->public_updates_channel_id = (u64snowflake)0;
    self->preferred_locale = NULL;
    self->features = NULL;
    self->description = NULL;
    self->premium_progress_bar_enabled = false;
}
void discord_create_guild_channel_init(struct discord_create_guild_channel *self) {
    self->reason = NULL;
    self->name = NULL;
    self->type = 0;
    self->topic = NULL;
 
    self->bitrate = 0;
 
 
    self->user_limit = 0;
 
    self->rate_limit_per_user = 0;
    self->position = 0;
    self->permission_overwrites = NULL;
 
    self->parent_id = (u64snowflake)0;
 
    self->nsfw = false;
}
static void discord_modify_guild_channel_position_init(struct discord_modify_guild_channel_position *self) {
    self->id = (u64snowflake)0;
 
    self->position = 0;
 
    self->lock_category = false;
 
    self->parent_id = (u64snowflake)0;
 
}

   

void discord_list_active_guild_threads_init(struct discord_list_active_guild_threads *self) {
    self->threads = NULL;
    self->members = NULL;
}
static void discord_list_guild_members_init(struct discord_list_guild_members *self) {
    self->limit = 0;
    self->after = (u64snowflake)0;
}
static void discord_search_guild_members_init(struct discord_search_guild_members *self) {
    self->query = NULL;
    self->limit = 0;
}
void discord_add_guild_member_init(struct discord_add_guild_member *self) {
    self->access_token = NULL;
    self->nick = NULL;
    self->roles = NULL;
    self->mute = false;
    self->deaf = false;
}
void discord_modify_guild_member_init(struct discord_modify_guild_member *self) {
    self->reason = NULL;
 
    self->nick = NULL;
 
 
    self->roles = NULL;
 
 
    self->mute = false;
 
 
    self->deaf = false;
 
 
    self->channel_id = (u64snowflake)0;
 
 
    self->communication_disabled_until = (u64unix_ms)0;
 
}
void discord_modify_current_member_init(struct discord_modify_current_member *self) {
    self->reason = NULL;
 
    self->nick = NULL;
 
}
void discord_modify_current_user_nick_init(struct discord_modify_current_user_nick *self) {
    self->reason = NULL;
 
    self->nick = NULL;
 
}
static void discord_add_guild_member_role_init(struct discord_add_guild_member_role *self) {
    self->reason = NULL;
}
static void discord_remove_guild_member_role_init(struct discord_remove_guild_member_role *self) {
    self->reason = NULL;
}
static void discord_remove_guild_member_init(struct discord_remove_guild_member *self) {
    self->reason = NULL;
}
void discord_create_guild_ban_init(struct discord_create_guild_ban *self) {
    self->reason = NULL;
 
    self->delete_message_days = 0;
 
}
static void discord_remove_guild_ban_init(struct discord_remove_guild_ban *self) {
    self->reason = NULL;
}
void discord_create_guild_role_init(struct discord_create_guild_role *self) {
    self->reason = NULL;
    self->name = NULL;
    self->permissions = (u64bitmask)0;
    self->color = 0;
    self->hoist = false;
    self->icon = NULL;
    self->unicode_emoji = NULL;
    self->mentionable = false;
}
static void discord_modify_guild_role_position_init(struct discord_modify_guild_role_position *self) {
    self->id = (u64snowflake)0;
 
    self->position = 0;
 
}

   

void discord_modify_guild_role_init(struct discord_modify_guild_role *self) {
    self->reason = NULL;
    self->name = NULL;
    self->permissions = (u64bitmask)0;
    self->color = 0;
    self->hoist = false;
    self->icon = NULL;
    self->unicode_emoji = NULL;
    self->mentionable = false;
}
static void discord_delete_guild_role_init(struct discord_delete_guild_role *self) {
    self->reason = NULL;
}
static void discord_get_guild_prune_count_init(struct discord_get_guild_prune_count *self) {
 
    self->days = 7;
 
    self->include_roles = NULL;
}
void discord_begin_guild_prune_init(struct discord_begin_guild_prune *self) {
    self->reason = NULL;
 
    self->days = 7;
 
    self->compute_prune_count = true;
    self->include_roles = NULL;
}
static void discord_delete_guild_integrations_init(struct discord_delete_guild_integrations *self) {
    self->reason = NULL;
 
    self->days = 7;
 
    self->include_roles = NULL;
}
static void discord_get_guild_widget_image_init(struct discord_get_guild_widget_image *self) {
 
    self->style = NULL;
 
}
void discord_modify_guild_welcome_screen_init(struct discord_modify_guild_welcome_screen *self) {
    self->reason = NULL;
    self->enabled = false;
    self->welcome_channels = NULL;
 
    self->description = NULL;
 
}
void discord_modify_current_user_voice_state_init(struct discord_modify_current_user_voice_state *self) {
    self->channel_id = (u64snowflake)0;
    self->suppress = false;
 
    self->request_to_speak_timestamp = (u64unix_ms)0;
 
}
void discord_modify_user_voice_state_init(struct discord_modify_user_voice_state *self) {
    self->channel_id = (u64snowflake)0;
    self->suppress = false;
}

   


   
   
   


   
   
   
   

void discord_guild_scheduled_event_init(struct discord_guild_scheduled_event *self) {
    self->id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->creator_id = (u64snowflake)0;
    self->name = NULL;
    self->description = NULL;
    self->scheduled_start_time = (u64unix_ms)0;
    self->scheduled_end_time = (u64unix_ms)0;
 
    self->privacy_level = 0;
 
 
    self->status = 0;
 
 
    self->entity_type = 0;
 
    self->entity_id = (u64snowflake)0;
 
    self->entity_metadata = NULL;
 
 
    self->creator = NULL;
 
    self->user_count = 0;
    self->image = NULL;
}
static void discord_guild_scheduled_event_entity_metadata_init(struct discord_guild_scheduled_event_entity_metadata *self) {
 
    self->location = NULL;
 
}

   

static void discord_guild_scheduled_event_user_init(struct discord_guild_scheduled_event_user *self) {
    self->guild_scheduled_event_id = (u64snowflake)0;
 
    self->user = NULL;
 
 
    self->member = NULL;
 
}

   

static void discord_list_guild_scheduled_events_init(struct discord_list_guild_scheduled_events *self) {
    self->with_user_count = false;
}
void discord_create_guild_scheduled_event_init(struct discord_create_guild_scheduled_event *self) {
    self->reason = NULL;
 
    self->channel_id = (u64snowflake)0;
 
 
    self->entity_metadata = NULL;
 
    self->name = NULL;
 
    self->privacy_level = 0;
 
 
    self->scheduled_start_time = (u64unix_ms)0;
 
 
    self->scheduled_end_time = (u64unix_ms)0;
 
 
    self->description = NULL;
 
 
    self->entity_type = 0;
 
 
    self->image = NULL;
 
}
static void discord_get_guild_scheduled_event_init(struct discord_get_guild_scheduled_event *self) {
    self->with_user_count = false;
}
void discord_modify_guild_scheduled_event_init(struct discord_modify_guild_scheduled_event *self) {
    self->reason = NULL;
 
    self->channel_id = (u64snowflake)0;
 
 
    self->entity_metadata = NULL;
 
    self->name = NULL;
 
    self->scheduled_start_time = (u64unix_ms)0;
 
 
    self->scheduled_end_time = (u64unix_ms)0;
 
 
    self->description = NULL;
 
 
    self->entity_type = 0;
 
 
    self->status = 0;
 
 
    self->image = NULL;
 
}
static void discord_get_guild_scheduled_event_users_init(struct discord_get_guild_scheduled_event_users *self) {
    self->limit = 0;
    self->with_member = false;
 
    self->before = (u64snowflake)0;
 
 
    self->after = (u64snowflake)0;
 
}
void discord_guild_template_init(struct discord_guild_template *self) {
    self->code = NULL;
    self->name = NULL;
    self->description = NULL;
    self->usage_count = 0;
    self->creator_id = (u64snowflake)0;
    self->creator = NULL;
    self->created_at = (u64unix_ms)0;
    self->updated_at = (u64unix_ms)0;
    self->source_guild_id = (u64snowflake)0;
    self->serialized_source_guild = NULL;
    self->is_dirty = false;
}

   

void discord_create_guild_from_guild_template_init(struct discord_create_guild_from_guild_template *self) {
    self->name = NULL;
 
    self->icon = NULL;
 
}
void discord_create_guild_template_init(struct discord_create_guild_template *self) {
    self->name = NULL;
 
    self->description = NULL;
 
}
void discord_modify_guild_template_init(struct discord_modify_guild_template *self) {
 
    self->name = NULL;
 
 
    self->description = NULL;
 
}

   
   

void discord_stage_instance_init(struct discord_stage_instance *self) {
    self->id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->topic = NULL;
 
    self->privacy_level = 0;
 
    self->discoverable_disabled = false;
}

   

void discord_create_stage_instance_init(struct discord_create_stage_instance *self) {
    self->reason = NULL;
    self->channel_id = (u64snowflake)0;
    self->topic = NULL;
 
    self->privacy_level = 0;
 
}
void discord_modify_stage_instance_init(struct discord_modify_stage_instance *self) {
    self->reason = NULL;
    self->topic = NULL;
 
    self->privacy_level = 0;
 
}
static void discord_delete_stage_instance_init(struct discord_delete_stage_instance *self) {
    self->reason = NULL;
}

   
   


   
   
   

void discord_sticker_init(struct discord_sticker *self) {
    self->id = (u64snowflake)0;
 
    self->pack_id = (u64snowflake)0;
 
    self->name = NULL;
    self->description = NULL;
    self->tags = NULL;
 
    self->type = 0;
 
 
    self->format_type = 0;
 
    self->available = false;
 
    self->guild_id = (u64snowflake)0;
 
 
    self->user = NULL;
 
    self->sort_value = 0;
}

   

static void discord_sticker_item_init(struct discord_sticker_item *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
 
    self->format_type = 0;
 
}

   

static void discord_sticker_pack_init(struct discord_sticker_pack *self) {
    self->id = (u64snowflake)0;
 
    self->stickers = NULL;
 
    self->name = NULL;
    self->sku_id = (u64snowflake)0;
 
    self->cover_sticker_id = (u64snowflake)0;
 
    self->description = NULL;
 
    self->banner_asset_id = (u64snowflake)0;
 
}

   

void discord_list_nitro_sticker_packs_init(struct discord_list_nitro_sticker_packs *self) {
    self->sticker_packs = NULL;
}
static void discord_create_guild_sticker_init(struct discord_create_guild_sticker *self) {
    self->reason = NULL;
    self->name = NULL;
    self->description = NULL;
    self->tags = NULL;
    self->file = NULL;
}
void discord_modify_guild_sticker_init(struct discord_modify_guild_sticker *self) {
    self->name = NULL;
    self->description = NULL;
    self->tags = NULL;
}
static void discord_delete_guild_sticker_init(struct discord_delete_guild_sticker *self) {
    self->reason = NULL;
}
















   
   
   


   
   

void discord_user_init(struct discord_user *self) {
    self->id = (u64snowflake)0;
    self->username = NULL;
    self->discriminator = NULL;
    self->avatar = NULL;
    self->bot = false;
    self->System = false;
    self->mfa_enabled = false;
    self->banner = NULL;
    self->accent_color = 0;
    self->locale = NULL;
    self->verified = false;
    self->email = NULL;
    self->flags = (u64bitmask)0;
    self->premium_type = 0;
    self->public_flags = (u64bitmask)0;
}

   

static void discord_connection_init(struct discord_connection *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->type = NULL;
    self->revoked = false;
 
    self->integrations = NULL;
 
    self->verified = false;
    self->friend_sync = false;
    self->show_activity = false;
    self->visibility = 0;
}

   

void discord_modify_current_user_init(struct discord_modify_current_user *self) {
 
    self->username = NULL;
 
 
    self->avatar = NULL;
 
}
static void discord_get_current_user_guilds_init(struct discord_get_current_user_guilds *self) {
 
    self->before = (u64snowflake)0;
 
 
    self->after = (u64snowflake)0;
 
 
    self->limit = 200;
 
}
void discord_create_dm_init(struct discord_create_dm *self) {
 
    self->recipient_id = (u64snowflake)0;
 
}
void discord_create_group_dm_init(struct discord_create_group_dm *self) {
 
    self->access_tokens = NULL;
 
 
    self->nicks = NULL;
 
}
void discord_voice_state_init(struct discord_voice_state *self) {
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->user_id = (u64snowflake)0;
    self->member = NULL;
    self->session_id = NULL;
    self->deaf = false;
    self->mute = false;
    self->self_deaf = false;
    self->self_mute = false;
    self->self_stream = false;
    self->self_video = false;
    self->suppress = false;
 
    self->request_to_speak_timestamp = (u64unix_ms)0;
 
}

   

static void discord_voice_region_init(struct discord_voice_region *self) {
    self->id = NULL;
    self->name = NULL;
    self->optimal = false;
    self->deprecated = false;
    self->custom = false;
}

   


   
   
   

void discord_webhook_init(struct discord_webhook *self) {
    self->id = (u64snowflake)0;
 
    self->type = 0;
 
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
 
    self->user = NULL;
 
    self->name = NULL;
    self->token = NULL;
    self->application_id = (u64snowflake)0;
 
    self->source_channel = NULL;
 
    self->url = NULL;
}

   

void discord_create_webhook_init(struct discord_create_webhook *self) {
    self->reason = NULL;
    self->name = NULL;
 
    self->avatar = NULL;
 
}
void discord_modify_webhook_init(struct discord_modify_webhook *self) {
    self->reason = NULL;
    self->name = NULL;
 
    self->avatar = NULL;
 
    self->channel_id = (u64snowflake)0;
}
static void discord_delete_webhook_init(struct discord_delete_webhook *self) {
    self->reason = NULL;
}
void discord_modify_webhook_with_token_init(struct discord_modify_webhook_with_token *self) {
    self->name = NULL;
 
    self->avatar = NULL;
 
}
void discord_execute_webhook_init(struct discord_execute_webhook *self) {
    self->wait = false;
    self->thread_id = (u64snowflake)0;
    self->content = NULL;
    self->username = NULL;
    self->avatar_url = NULL;
    self->tts = false;
 
    self->embeds = NULL;
 
 
    self->allowed_mentions = NULL;
 
 
    self->components = NULL;
 
 
    self->attachments = NULL;
 
 
    self->flags = (u64bitmask)0;
 
}
static void discord_get_webhook_message_init(struct discord_get_webhook_message *self) {
 
    self->thread_id = (u64snowflake)0;
 
}
void discord_edit_webhook_message_init(struct discord_edit_webhook_message *self) {
    self->thread_id = (u64snowflake)0;
    self->content = NULL;
 
    self->embeds = NULL;
 
 
    self->allowed_mentions = NULL;
 
 
    self->components = NULL;
 
 
    self->attachments = NULL;
 
}
static void discord_delete_webhook_message_init(struct discord_delete_webhook_message *self) {
 
    self->thread_id = (u64snowflake)0;
 
}





























   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   

static void discord_activity_init(struct discord_activity *self) {
 
    self->name = NULL;
 
    self->type = 0;
 
    self->url = NULL;
 
 
    self->created_at = (u64unix_ms)0;
 
 
    self->timestamps = NULL;
 
 
    self->application_id = (u64snowflake)0;
 
 
    self->details = NULL;
 
 
    self->state = NULL;
 
 
    self->emoji = NULL;
 
 
    self->party = NULL;
 
 
    self->assets = NULL;
 
 
    self->secrets = NULL;
 
    self->instance = false;
    self->flags = (u64bitmask)0;
 
    self->buttons = NULL;
 
}

   

static void discord_activity_timestamps_init(struct discord_activity_timestamps *self) {
    self->start = (u64unix_ms)0;
    self->end = (u64unix_ms)0;
}
static void discord_activity_emoji_init(struct discord_activity_emoji *self) {
    self->name = NULL;
    self->id = (u64snowflake)0;
    self->animated = false;
}
static void discord_activity_party_init(struct discord_activity_party *self) {
    self->id = NULL;
    self->size = NULL;
}
static void discord_activity_assets_init(struct discord_activity_assets *self) {
    self->large_image = NULL;
    self->large_text = NULL;
    self->small_image = NULL;
    self->small_text = NULL;
}
static void discord_activity_secrets_init(struct discord_activity_secrets *self) {
    self->join = NULL;
    self->spectate = NULL;
    self->match = NULL;
}
static void discord_activity_button_init(struct discord_activity_button *self) {
    self->label = NULL;
    self->url = NULL;
}

   

void discord_presence_update_init(struct discord_presence_update *self) {
 
    self->user = NULL;
 
 
    self->guild_id = (u64snowflake)0;
 
 
    self->status = NULL;
 
 
    self->client_status = NULL;
 
 
    self->activities = NULL;
 
 
    self->since = (u64unix_ms)0;
 
    self->afk = false;
}
static void discord_client_status_init(struct discord_client_status *self) {
    self->desktop = NULL;
    self->mobile = NULL;
    self->web = NULL;
}

   

void discord_identify_init(struct discord_identify *self) {
    self->token = NULL;
    self->properties = NULL;
    self->compress = false;
    self->large_threshold = 50;
 
    self->shard = NULL;
 
 
    self->presence = NULL;
 
    self->intents = (u64bitmask)0;
}
static void discord_identify_connection_init(struct discord_identify_connection *self) {
    self->os = NULL;
    self->browser = NULL;
    self->device = NULL;
}
void discord_resume_init(struct discord_resume *self) {
    self->token = NULL;
    self->session_id = NULL;
    self->seq = 0;
}
void discord_request_guild_members_init(struct discord_request_guild_members *self) {
    self->guild_id = (u64snowflake)0;
    self->query = NULL;
    self->limit = 0;
    self->presences = false;
 
    self->user_ids = NULL;
 
 
    self->nonce = NULL;
 
}
void discord_update_voice_state_init(struct discord_update_voice_state *self) {
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->self_mute = false;
    self->self_deaf = false;
}
void discord_ready_init(struct discord_ready *self) {
    self->v = 0;
    self->user = NULL;
    self->guilds = NULL;
    self->session_id = NULL;
    self->shard = NULL;
    self->application = NULL;
}
void discord_auto_moderation_action_execution_init(struct discord_auto_moderation_action_execution *self) {
    self->guild_id = (u64snowflake)0;
    self->action = NULL;
    self->rule_trigger_type = 0;
    self->user_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->message_id = (u64snowflake)0;
    self->alert_system_message_id = (u64snowflake)0;
    self->content = NULL;
    self->matched_keyword = NULL;
    self->matched_content = NULL;
}
void discord_thread_list_sync_init(struct discord_thread_list_sync *self) {
    self->guild_id = (u64snowflake)0;
    self->channel_ids = NULL;
    self->threads = NULL;
    self->members = NULL;
}
void discord_thread_members_update_init(struct discord_thread_members_update *self) {
    self->id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->member_count = 0;
    self->added_members = NULL;
    self->removed_member_ids = NULL;
}
void discord_channel_pins_update_init(struct discord_channel_pins_update *self) {
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->last_pin_timestamp = (u64unix_ms)0;
}
void discord_guild_ban_add_init(struct discord_guild_ban_add *self) {
    self->guild_id = (u64snowflake)0;
    self->user = NULL;
}
void discord_guild_ban_remove_init(struct discord_guild_ban_remove *self) {
    self->guild_id = (u64snowflake)0;
    self->user = NULL;
}
void discord_guild_emojis_update_init(struct discord_guild_emojis_update *self) {
    self->guild_id = (u64snowflake)0;
    self->emojis = NULL;
}
void discord_guild_stickers_update_init(struct discord_guild_stickers_update *self) {
    self->guild_id = (u64snowflake)0;
    self->stickers = NULL;
}
void discord_guild_integrations_update_init(struct discord_guild_integrations_update *self) {
    self->guild_id = (u64snowflake)0;
}
void discord_guild_member_remove_init(struct discord_guild_member_remove *self) {
    self->guild_id = (u64snowflake)0;
    self->user = NULL;
}
void discord_guild_member_update_init(struct discord_guild_member_update *self) {
    self->guild_id = (u64snowflake)0;
    self->roles = NULL;
    self->user = NULL;
    self->nick = NULL;
    self->avatar = NULL;
    self->joined_at = (u64unix_ms)0;
    self->premium_since = (u64unix_ms)0;
    self->deaf = false;
    self->mute = false;
    self->pending = false;
    self->communication_disabled_until = (u64unix_ms)0;
}
void discord_guild_members_chunk_init(struct discord_guild_members_chunk *self) {
    self->guild_id = (u64snowflake)0;
    self->members = NULL;
    self->chunk_index = 0;
    self->chunk_count = 0;
    self->not_found = NULL;
    self->presences = NULL;
    self->nonce = NULL;
}
void discord_guild_role_create_init(struct discord_guild_role_create *self) {
    self->guild_id = (u64snowflake)0;
    self->role = NULL;
}
void discord_guild_role_update_init(struct discord_guild_role_update *self) {
    self->guild_id = (u64snowflake)0;
    self->role = NULL;
}
void discord_guild_role_delete_init(struct discord_guild_role_delete *self) {
    self->guild_id = (u64snowflake)0;
    self->role_id = (u64snowflake)0;
}
void discord_guild_scheduled_event_user_add_init(struct discord_guild_scheduled_event_user_add *self) {
    self->guild_scheduled_event_id = (u64snowflake)0;
    self->user_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
}
void discord_guild_scheduled_event_user_remove_init(struct discord_guild_scheduled_event_user_remove *self) {
    self->guild_scheduled_event_id = (u64snowflake)0;
    self->user_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
}
void discord_integration_delete_init(struct discord_integration_delete *self) {
    self->id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->application_id = (u64snowflake)0;
}
void discord_invite_create_init(struct discord_invite_create *self) {
    self->channel_id = (u64snowflake)0;
    self->code = NULL;
    self->created_at = (u64unix_ms)0;
    self->guild_id = (u64snowflake)0;
    self->inviter = NULL;
    self->max_age = 0;
    self->max_uses = 0;
    self->target_type = 0;
    self->target_user = NULL;
    self->target_application = NULL;
    self->temporary = false;
    self->uses = 0;
}
void discord_invite_delete_init(struct discord_invite_delete *self) {
    self->channel_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->code = NULL;
}
void discord_message_delete_init(struct discord_message_delete *self) {
    self->id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
}
void discord_message_delete_bulk_init(struct discord_message_delete_bulk *self) {
    self->ids = NULL;
    self->channel_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
}
void discord_message_reaction_add_init(struct discord_message_reaction_add *self) {
    self->user_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->message_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->member = NULL;
    self->emoji = NULL;
}
void discord_message_reaction_remove_init(struct discord_message_reaction_remove *self) {
    self->user_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->message_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->emoji = NULL;
}
void discord_message_reaction_remove_all_init(struct discord_message_reaction_remove_all *self) {
    self->channel_id = (u64snowflake)0;
    self->message_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
}
void discord_message_reaction_remove_emoji_init(struct discord_message_reaction_remove_emoji *self) {
    self->channel_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->message_id = (u64snowflake)0;
    self->emoji = NULL;
}
void discord_typing_start_init(struct discord_typing_start *self) {
    self->channel_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->user_id = (u64snowflake)0;
    self->timestamp = (u64unix_ms)0;
    self->member = NULL;
}
void discord_voice_server_update_init(struct discord_voice_server_update *self) {
    self->token = NULL;
    self->guild_id = (u64snowflake)0;
    self->endpoint = NULL;
}
void discord_webhooks_update_init(struct discord_webhooks_update *self) {
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
}
void discord_session_start_limit_init(struct discord_session_start_limit *self) {
    self->total = 0;
    self->remaining = 0;
    self->reset_after = 0;
    self->max_concurrency = 0;
}
void discord_auth_response_init(struct discord_auth_response *self) {
    self->application = NULL;
    self->scopes = NULL;
    self->expires = (u64unix_ms)0;
    self->user = NULL;
}









































void discord_role_init(struct discord_role *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->color = 0;
    self->hoist = false;
 
    self->icon = NULL;
 
 
    self->unicode_emoji = NULL;
 
    self->position = 0;
    self->permissions = (u64bitmask)0;
    self->managed = false;
    self->mentionable = false;
 
    self->tags = NULL;
 
}

   

static void discord_role_tag_init(struct discord_role_tag *self) {
 
    self->bot_id = (u64snowflake)0;
 
 
    self->integration_id = (u64snowflake)0;
 
    self->premium_subscribe = false;
}

   
   

void discord_team_init(struct discord_team *self) {
    self->icon = NULL;
    self->id = (u64snowflake)0;
 
    self->members = NULL;
 
    self->name = NULL;
    self->owner_user_id = (u64snowflake)0;
}
static void discord_team_member_init(struct discord_team_member *self) {
    self->membership_state = 0;
 
    self->permissions = NULL;
 
    self->team_id = (u64snowflake)0;
 
    self->user = NULL;
 
}

   





   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   
   
   


   
   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   

void discord_application_command_init(struct discord_application_command *self) {
 
    self->id = (u64snowflake)0;
 
 
    self->type = 0;
 
 
    self->application_id = (u64snowflake)0;
 
 
    self->guild_id = (u64snowflake)0;
 
 
    self->name = NULL;
 
 
    self->description = NULL;
 
 
    self->options = NULL;
 
 
    self->default_member_permissions = (u64bitmask)0;
 
 
    self->dm_permission = false;
 
 
    self->default_permission = true;
 
 
    self->version = (u64snowflake)0;
 
}

   

static void discord_application_command_option_init(struct discord_application_command_option *self) {
    self->type = 0;
    self->name = NULL;
    self->description = NULL;
 
    self->required = false;
 
 
    self->choices = NULL;
 
 
    self->options = NULL;
 
 
    self->channel_types = NULL;
 
 
    self->min_value = NULL;
 
 
    self->max_value = NULL;
 
 
    self->autocomplete = false;
 
}

   

static void discord_application_command_option_choice_init(struct discord_application_command_option_choice *self) {
    self->name = NULL;
    self->value = NULL;
}

   

static void discord_application_command_interaction_data_option_init(struct discord_application_command_interaction_data_option *self) {
    self->name = NULL;
    self->type = 0;
 
    self->value = NULL;
 
 
    self->options = NULL;
 
    self->focused = false;
}

   

static void discord_guild_application_command_permission_init(struct discord_guild_application_command_permission *self) {
    self->id = (u64snowflake)0;
    self->application_id = (u64snowflake)0;
    self->guild_id = (u64snowflake)0;
    self->permissions = NULL;
}

   

void discord_application_command_permission_init(struct discord_application_command_permission *self) {
    self->id = (u64snowflake)0;
    self->type = 0;
    self->permission = false;
}

   

void discord_create_global_application_command_init(struct discord_create_global_application_command *self) {
    self->name = NULL;
    self->description = NULL;
 
    self->options = NULL;
 
 
    self->default_member_permissions = (u64bitmask)0;
 
    self->dm_permission = false;
    self->default_permission = true;
 
    self->type = 0;
 
}
void discord_edit_global_application_command_init(struct discord_edit_global_application_command *self) {
    self->name = NULL;
    self->description = NULL;
 
    self->options = NULL;
 
 
    self->default_member_permissions = (u64bitmask)0;
 
    self->dm_permission = false;
    self->default_permission = true;
}
void discord_create_guild_application_command_init(struct discord_create_guild_application_command *self) {
    self->name = NULL;
    self->description = NULL;
 
    self->options = NULL;
 
 
    self->default_member_permissions = (u64bitmask)0;
 
    self->dm_permission = false;
    self->default_permission = true;
 
    self->type = 0;
 
}
void discord_edit_guild_application_command_init(struct discord_edit_guild_application_command *self) {
    self->name = NULL;
    self->description = NULL;
 
    self->options = NULL;
 
 
    self->default_member_permissions = (u64bitmask)0;
 
    self->default_permission = true;
}
void discord_bulk_overwrite_guild_application_commands_init(struct discord_bulk_overwrite_guild_application_commands *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->name_localizations = NULL;
    self->description = NULL;
    self->description_localizations = NULL;
 
    self->options = NULL;
 
 
    self->default_member_permissions = (u64bitmask)0;
 
    self->dm_permission = false;
 
    self->type = 0;
 
}

   
   
   
   


   
   
   
   
   
   
   

void discord_component_init(struct discord_component *self) {
 
    self->type = 0;
 
    self->custom_id = NULL;
    self->disabled = false;
 
    self->style = 0;
 
    self->label = NULL;
 
    self->emoji = NULL;
 
    self->url = NULL;
 
    self->options = NULL;
 
    self->placeholder = NULL;
 
    self->min_values = 1;
 
 
    self->max_values = 1;
 
 
    self->components = NULL;
 
    self->min_length = 0;
    self->max_length = 0;
    self->required = false;
    self->value = NULL;
}

   

static void discord_select_option_init(struct discord_select_option *self) {
    self->label = NULL;
    self->value = NULL;
    self->description = NULL;
 
    self->emoji = NULL;
 
    self->Default = false;
}

   


   
   
   
   
   


   
   
   
   
   
   
   

void discord_interaction_init(struct discord_interaction *self) {
    self->id = (u64snowflake)0;
    self->application_id = (u64snowflake)0;
    self->type = 0;
    self->data = NULL;
    self->guild_id = (u64snowflake)0;
    self->channel_id = (u64snowflake)0;
    self->member = NULL;
    self->user = NULL;
    self->token = NULL;
    self->version = 1;
    self->message = NULL;
    self->locale = NULL;
    self->guild_locale = NULL;
}
static void discord_interaction_data_init(struct discord_interaction_data *self) {
    self->id = (u64snowflake)0;
    self->name = NULL;
    self->type = 0;
    self->resolved = NULL;
    self->options = NULL;
    self->custom_id = NULL;
    self->component_type = 0;
    self->values = NULL;
    self->target_id = (u64snowflake)0;
    self->components = NULL;
}
static void discord_resolved_data_init(struct discord_resolved_data *self) {
    self->users = NULL;
    self->members = NULL;
    self->roles = NULL;
    self->channels = NULL;
    self->messages = NULL;
    self->attachments = NULL;
}
static void discord_message_interaction_init(struct discord_message_interaction *self) {
    self->id = (u64snowflake)0;
    self->type = 0;
    self->name = NULL;
    self->user = NULL;
    self->member = NULL;
}
void discord_interaction_response_init(struct discord_interaction_response *self) {
    self->type = 0;
 
    self->data = NULL;
 
}
static void discord_interaction_callback_data_init(struct discord_interaction_callback_data *self) {
 
    self->components = NULL;
 
 
    self->tts = false;
 
 
    self->content = NULL;
 
 
    self->embeds = NULL;
 
 
    self->flags = (u64bitmask)0;
 
 
    self->attachments = NULL;
 
    self->choices = NULL;
    self->custom_id = NULL;
    self->title = NULL;
}
void discord_edit_original_interaction_response_init(struct discord_edit_original_interaction_response *self) {
    self->thread_id = (u64snowflake)0;
    self->content = NULL;
 
    self->embeds = NULL;
 
 
    self->allowed_mentions = NULL;
 
 
    self->components = NULL;
 
 
    self->attachments = NULL;
 
}
void discord_create_followup_message_init(struct discord_create_followup_message *self) {
    self->wait = true;
    self->thread_id = (u64snowflake)0;
    self->avatar_url = NULL;
    self->tts = false;
 
    self->embeds = NULL;
 
 
    self->allowed_mentions = NULL;
 
 
    self->components = NULL;
 
 
    self->attachments = NULL;
 
 
    self->flags = (u64bitmask)0;
 
}
void discord_edit_followup_message_init(struct discord_edit_followup_message *self) {
    self->thread_id = (u64snowflake)0;
    self->content = NULL;
 
    self->embeds = NULL;
 
 
    self->allowed_mentions = NULL;
 
 
    self->components = NULL;
 
 
    self->attachments = NULL;
 
}
void strings_cleanup(struct strings *self) {
    __carray_free(self, char *, NULL, free(__CARRAY_OPERAND_A));
}
void json_values_cleanup(struct json_values *self) {
    __carray_free(self, json_char *, NULL, free(__CARRAY_OPERAND_A));
}
void snowflakes_cleanup(struct snowflakes *self) {
    __carray_free(self, u64snowflake, NULL, NULL);
}
void bitmasks_cleanup(struct bitmasks *self) {
    __carray_free(self, u64bitmask, NULL, NULL);
}
void integers_cleanup(struct integers *self) {
    __carray_free(self, int, NULL, NULL);
}








void discord_application_cleanup(struct discord_application *self) {
   
    if (self->name) free(self->name);
    if (self->icon) free(self->icon);
    if (self->description) free(self->description);
 
    if (self->rpc_origins) { strings_cleanup(self->rpc_origins); free(self->rpc_origins); };
 
    (void)self->bot_public;
    (void)self->bot_require_code_grant;
    if (self->terms_of_service_url) free(self->terms_of_service_url);
    if (self->privacy_policy_url) free(self->privacy_policy_url);
 
    if (self->owner) { discord_user_cleanup(self->owner); free(self->owner); };
 
    if (self->summary) free(self->summary);
    if (self->verify_key) free(self->verify_key);
 
    if (self->team) { discord_team_cleanup(self->team); free(self->team); };
 
   
   
    if (self->slug) free(self->slug);
    if (self->cover_image) free(self->cover_image);
   
}
void discord_install_params_cleanup(struct discord_install_params *self) {
    if (self->scopes) { strings_cleanup(self->scopes); free(self->scopes); };
   
}

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

void discord_audit_log_cleanup(struct discord_audit_log *self) {
 
    if (self->audit_log_entries) { discord_audit_log_entries_cleanup(self->audit_log_entries); free(self->audit_log_entries); };
 
 
    if (self->guild_scheduled_events) { discord_guild_scheduled_events_cleanup(self->guild_scheduled_events); free(self->guild_scheduled_events); };
 
 
    if (self->integrations) { discord_integrations_cleanup(self->integrations); free(self->integrations); };
 
 
    if (self->threads) { discord_channels_cleanup(self->threads); free(self->threads); };
 
 
    if (self->users) { discord_users_cleanup(self->users); free(self->users); };
 
 
    if (self->webhooks) { discord_webhooks_cleanup(self->webhooks); free(self->webhooks); };
 
}
static void discord_audit_log_entry_cleanup(struct discord_audit_log_entry *self) {
   
 
    if (self->changes) { discord_audit_log_changes_cleanup(self->changes); free(self->changes); };
 
   
   
 
    (void)self->action_type;
 
 
    if (self->options) { discord_optional_audit_entry_infos_cleanup(self->options); free(self->options); };
 
    if (self->reason) free(self->reason);
}
static void discord_audit_log_entries_cleanup(struct discord_audit_log_entries *self) {
    __carray_free(self, struct discord_audit_log_entry, NULL, discord_audit_log_entry_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_optional_audit_entry_info_cleanup(struct discord_optional_audit_entry_info *self) {
   
    if (self->count) free(self->count);
    if (self->delete_member_days) free(self->delete_member_days);
   
    if (self->members_removed) free(self->members_removed);
   
    if (self->role_name) free(self->role_name);
    if (self->type) free(self->type);
}
static void discord_optional_audit_entry_infos_cleanup(struct discord_optional_audit_entry_infos *self) {
    __carray_free(self, struct discord_optional_audit_entry_info, NULL, discord_optional_audit_entry_info_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_audit_log_change_cleanup(struct discord_audit_log_change *self) {
    if (self->new_value) free(self->new_value);
    if (self->old_value) free(self->old_value);
    if (self->key) free(self->key);
}
static void discord_audit_log_changes_cleanup(struct discord_audit_log_changes *self) {
    __carray_free(self, struct discord_audit_log_change, NULL, discord_audit_log_change_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_get_guild_audit_log_cleanup(struct discord_get_guild_audit_log *self) {
   
    (void)self->action_type;
   
 
    (void)self->limit;
 
}

   
   
   
   


   
   
   


   


   
   
   

static void discord_auto_moderation_trigger_metadata_cleanup(struct discord_auto_moderation_trigger_metadata *self) {
    if (self->keyword_filter) { strings_cleanup(self->keyword_filter); free(self->keyword_filter); };
    if (self->presets) { integers_cleanup(self->presets); free(self->presets); };
}
static void discord_auto_moderation_action_cleanup(struct discord_auto_moderation_action *self) {
 
    (void)self->type;
 
 
    if (self->metadata) { discord_auto_moderation_action_metadata_cleanup(self->metadata); free(self->metadata); };
 
}
static void discord_auto_moderation_actions_cleanup(struct discord_auto_moderation_actions *self) {
    __carray_free(self, struct discord_auto_moderation_action, NULL, discord_auto_moderation_action_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_auto_moderation_action_metadata_cleanup(struct discord_auto_moderation_action_metadata *self) {
 
   
 
 
    (void)self->duration_seconds;
 
}
void discord_auto_moderation_rule_cleanup(struct discord_auto_moderation_rule *self) {
   
   
    if (self->name) free(self->name);
   
 
    (void)self->event_type;
 
 
    (void)self->trigger_type;
 
    if (self->actions) { discord_auto_moderation_actions_cleanup(self->actions); free(self->actions); };
    if (self->trigger_metadata) { discord_auto_moderation_trigger_metadata_cleanup(self->trigger_metadata); free(self->trigger_metadata); };
    (void)self->enabled;
    if (self->exempt_roles) { snowflakes_cleanup(self->exempt_roles); free(self->exempt_roles); };
    if (self->exempt_channels) { snowflakes_cleanup(self->exempt_channels); free(self->exempt_channels); };
}
void discord_auto_moderation_rules_cleanup(struct discord_auto_moderation_rules *self) {
    __carray_free(self, struct discord_auto_moderation_rule, NULL, discord_auto_moderation_rule_cleanup(&__CARRAY_OPERAND_A));
}
void discord_create_auto_moderation_rule_cleanup(struct discord_create_auto_moderation_rule *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
 
    (void)self->event_type;
 
 
    (void)self->trigger_type;
 
 
    if (self->actions) { discord_auto_moderation_actions_cleanup(self->actions); free(self->actions); };
 
 
    if (self->trigger_metadata) { discord_auto_moderation_trigger_metadata_cleanup(self->trigger_metadata); free(self->trigger_metadata); };
 
    (void)self->enabled;
 
    if (self->exempt_roles) { snowflakes_cleanup(self->exempt_roles); free(self->exempt_roles); };
 
 
    if (self->exempt_channels) { snowflakes_cleanup(self->exempt_channels); free(self->exempt_channels); };
 
}
void discord_modify_auto_moderation_rule_cleanup(struct discord_modify_auto_moderation_rule *self) {
    if (self->reason) free(self->reason);
 
    if (self->name) free(self->name);
 
 
    (void)self->event_type;
 
 
    if (self->trigger_metadata) { discord_auto_moderation_trigger_metadata_cleanup(self->trigger_metadata); free(self->trigger_metadata); };
 
 
    if (self->actions) { discord_auto_moderation_actions_cleanup(self->actions); free(self->actions); };
 
    (void)self->enabled;
 
    if (self->exempt_roles) { snowflakes_cleanup(self->exempt_roles); free(self->exempt_roles); };
 
 
    if (self->exempt_channels) { snowflakes_cleanup(self->exempt_channels); free(self->exempt_channels); };
 
}
static void discord_delete_auto_moderation_rule_cleanup(struct discord_delete_auto_moderation_rule *self) {
    if (self->reason) free(self->reason);
}

   
   

void discord_invite_cleanup(struct discord_invite *self) {
    if (self->code) free(self->code);
 
    if (self->guild) { discord_guild_cleanup(self->guild); free(self->guild); };
 
    if (self->channel) { discord_channel_cleanup(self->channel); free(self->channel); };
 
    if (self->inviter) { discord_user_cleanup(self->inviter); free(self->inviter); };
 
 
    (void)self->target_type;
 
 
    if (self->target_user) { discord_user_cleanup(self->target_user); free(self->target_user); };
 
 
    if (self->target_application) { discord_application_cleanup(self->target_application); free(self->target_application); };
 
    (void)self->approximate_presence_count;
    (void)self->approximate_member_count;
 
    ;
 
 
    if (self->stage_instance) { discord_invite_stage_instance_cleanup(self->stage_instance); free(self->stage_instance); };
 
 
    if (self->guild_scheduled_event) { discord_guild_scheduled_event_cleanup(self->guild_scheduled_event); free(self->guild_scheduled_event); };
 
}
void discord_invites_cleanup(struct discord_invites *self) {
    __carray_free(self, struct discord_invite, NULL, discord_invite_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_invite_metadata_cleanup(struct discord_invite_metadata *self) {
    (void)self->uses;
    (void)self->max_uses;
    (void)self->max_age;
    (void)self->temporary;
 
    ;
 
}
static void discord_invite_stage_instance_cleanup(struct discord_invite_stage_instance *self) {
 
    if (self->members) { discord_guild_members_cleanup(self->members); free(self->members); };
 
    (void)self->participant_count;
    (void)self->speaker_count;
    if (self->topic) free(self->topic);
}
void discord_get_invite_cleanup(struct discord_get_invite *self) {
    (void)self->with_counts;
    (void)self->with_expiration;
 
   
 
}
static void discord_delete_invite_cleanup(struct discord_delete_invite *self) {
    if (self->reason) free(self->reason);
}










   
   
   
   
   
   
   
   
   
   
   
   
   


   
   


   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   

void discord_channel_cleanup(struct discord_channel *self) {
   
    (void)self->type;
 
   
 
    (void)self->position;
    if (self->permission_overwrites) { discord_overwrites_cleanup(self->permission_overwrites); free(self->permission_overwrites); };
    if (self->name) free(self->name);
    if (self->topic) free(self->topic);
    (void)self->nsfw;
   
    (void)self->bitrate;
    (void)self->user_limit;
    (void)self->rate_limit_per_user;
    if (self->recipients) { discord_users_cleanup(self->recipients); free(self->recipients); };
    if (self->icon) free(self->icon);
   
   
   
    ;
    if (self->rtc_region) free(self->rtc_region);
    (void)self->voice_quality_mode;
    (void)self->message_count;
    (void)self->member_count;
    if (self->thread_metadata) { discord_thread_metadata_cleanup(self->thread_metadata); free(self->thread_metadata); };
    if (self->member) { discord_thread_member_cleanup(self->member); free(self->member); };
    (void)self->default_auto_archive_duration;
   
}
void discord_channels_cleanup(struct discord_channels *self) {
    __carray_free(self, struct discord_channel, NULL, discord_channel_cleanup(&__CARRAY_OPERAND_A));
}
void discord_message_cleanup(struct discord_message *self) {
   
   
   
    if (self->author) { discord_user_cleanup(self->author); free(self->author); };
    if (self->member) { discord_guild_member_cleanup(self->member); free(self->member); };
    if (self->content) free(self->content);
    ;
 
    ;
 
    (void)self->tts;
    (void)self->mention_everyone;
    if (self->mentions) { discord_users_cleanup(self->mentions); free(self->mentions); };
    if (self->mention_roles) { discord_roles_cleanup(self->mention_roles); free(self->mention_roles); };
    if (self->mention_channels) { discord_channels_cleanup(self->mention_channels); free(self->mention_channels); };
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
    if (self->reactions) { discord_reactions_cleanup(self->reactions); free(self->reactions); };
    if (self->nonce) free(self->nonce);
    (void)self->pinned;
   
    (void)self->type;
    if (self->activity) { discord_message_activity_cleanup(self->activity); free(self->activity); };
    if (self->application) { discord_application_cleanup(self->application); free(self->application); };
   
    if (self->message_reference) { discord_message_reference_cleanup(self->message_reference); free(self->message_reference); };
   
    if (self->referenced_message) { discord_message_cleanup(self->referenced_message); free(self->referenced_message); };
    if (self->interaction) { discord_message_interaction_cleanup(self->interaction); free(self->interaction); };
    if (self->thread) { discord_channel_cleanup(self->thread); free(self->thread); };
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
    if (self->sticker_items) { discord_sticker_items_cleanup(self->sticker_items); free(self->sticker_items); };
}
void discord_messages_cleanup(struct discord_messages *self) {
    __carray_free(self, struct discord_message, NULL, discord_message_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_message_activity_cleanup(struct discord_message_activity *self) {
    (void)self->type;
    if (self->party_id) free(self->party_id);
}
static void discord_message_reference_cleanup(struct discord_message_reference *self) {
   
   
   
    (void)self->fail_if_not_exists;
}
void discord_followed_channel_cleanup(struct discord_followed_channel *self) {
   
   
}
static void discord_reaction_cleanup(struct discord_reaction *self) {
    (void)self->count;
    (void)self->me;
    if (self->emoji) { discord_emoji_cleanup(self->emoji); free(self->emoji); };
}
static void discord_reactions_cleanup(struct discord_reactions *self) {
    __carray_free(self, struct discord_reaction, NULL, discord_reaction_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_overwrite_cleanup(struct discord_overwrite *self) {
   
    (void)self->type;
   
   
}
static void discord_overwrites_cleanup(struct discord_overwrites *self) {
    __carray_free(self, struct discord_overwrite, NULL, discord_overwrite_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_thread_metadata_cleanup(struct discord_thread_metadata *self) {
    (void)self->archived;
    (void)self->auto_archive_duration;
    ;
    (void)self->locked;
    (void)self->invitable;
    ;
}
void discord_thread_member_cleanup(struct discord_thread_member *self) {
   
   
    ;
   
   
}
void discord_thread_members_cleanup(struct discord_thread_members *self) {
    __carray_free(self, struct discord_thread_member, NULL, discord_thread_member_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_attachment_cleanup(struct discord_attachment *self) {
    if (self->content) free(self->content);
   
 
    if (self->filename) free(self->filename);
 
 
    if (self->description) free(self->description);
 
 
    if (self->content_type) free(self->content_type);
 
 
    (void)self->size;
 
 
    if (self->url) free(self->url);
 
 
    if (self->proxy_url) free(self->proxy_url);
 
 
    (void)self->height;
 
 
    (void)self->width;
 
    (void)self->ephemeral;
}
void discord_attachments_cleanup(struct discord_attachments *self) {
    __carray_free(self, struct discord_attachment, NULL, discord_attachment_cleanup(&__CARRAY_OPERAND_A));
}
void discord_embed_cleanup(struct discord_embed *self) {
    if (self->title) free(self->title);
    if (self->type) free(self->type);
    if (self->description) free(self->description);
    if (self->url) free(self->url);
 
    ;
 
 
    (void)self->color;
 
 
    if (self->footer) { discord_embed_footer_cleanup(self->footer); free(self->footer); };
 
 
    if (self->image) { discord_embed_image_cleanup(self->image); free(self->image); };
 
 
    if (self->thumbnail) { discord_embed_thumbnail_cleanup(self->thumbnail); free(self->thumbnail); };
 
 
    if (self->video) { discord_embed_video_cleanup(self->video); free(self->video); };
 
 
    if (self->provider) { discord_embed_provider_cleanup(self->provider); free(self->provider); };
 
 
    if (self->author) { discord_embed_author_cleanup(self->author); free(self->author); };
 
 
    if (self->fields) { discord_embed_fields_cleanup(self->fields); free(self->fields); };
 
}
void discord_embeds_cleanup(struct discord_embeds *self) {
    __carray_free(self, struct discord_embed, NULL, discord_embed_cleanup(&__CARRAY_OPERAND_A));
}
void discord_embed_thumbnail_cleanup(struct discord_embed_thumbnail *self) {
    if (self->url) free(self->url);
 
    if (self->proxy_url) free(self->proxy_url);
 
 
    (void)self->height;
 
 
    (void)self->width;
 
}
void discord_embed_video_cleanup(struct discord_embed_video *self) {
 
    if (self->url) free(self->url);
 
 
    if (self->proxy_url) free(self->proxy_url);
 
 
    (void)self->height;
 
 
    (void)self->width;
 
}
void discord_embed_image_cleanup(struct discord_embed_image *self) {
    if (self->url) free(self->url);
 
    if (self->proxy_url) free(self->proxy_url);
 
 
    (void)self->height;
 
 
    (void)self->width;
 
}
void discord_embed_provider_cleanup(struct discord_embed_provider *self) {
 
    if (self->name) free(self->name);
 
 
    if (self->url) free(self->url);
 
}
void discord_embed_author_cleanup(struct discord_embed_author *self) {
    if (self->name) free(self->name);
 
    if (self->url) free(self->url);
 
 
    if (self->icon_url) free(self->icon_url);
 
 
    if (self->proxy_icon_url) free(self->proxy_icon_url);
 
}
void discord_embed_footer_cleanup(struct discord_embed_footer *self) {
    if (self->text) free(self->text);
 
    if (self->icon_url) free(self->icon_url);
 
 
    if (self->proxy_icon_url) free(self->proxy_icon_url);
 
}
void discord_embed_field_cleanup(struct discord_embed_field *self) {
    if (self->name) free(self->name);
    if (self->value) free(self->value);
    ;
}
void discord_embed_fields_cleanup(struct discord_embed_fields *self) {
    __carray_free(self, struct discord_embed_field, NULL, discord_embed_field_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_channel_mention_cleanup(struct discord_channel_mention *self) {
   
   
    (void)self->type;
    if (self->name) free(self->name);
}
static void discord_allowed_mention_cleanup(struct discord_allowed_mention *self) {
    if (self->parse) { strings_cleanup(self->parse); free(self->parse); };
    if (self->roles) { snowflakes_cleanup(self->roles); free(self->roles); };
    if (self->users) { snowflakes_cleanup(self->users); free(self->users); };
    (void)self->replied_user;
}
void discord_thread_response_body_cleanup(struct discord_thread_response_body *self) {
    if (self->threads) { discord_channels_cleanup(self->threads); free(self->threads); };
    if (self->members) { discord_thread_members_cleanup(self->members); free(self->members); };
    (void)self->has_more;
}
void discord_modify_channel_cleanup(struct discord_modify_channel *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
    (void)self->type;
 
    (void)self->position;
 
    if (self->topic) free(self->topic);
    (void)self->nsfw;
 
    (void)self->rate_limit_per_user;
 
 
    (void)self->user_limit;
 
 
    if (self->permission_overwrites) { discord_overwrites_cleanup(self->permission_overwrites); free(self->permission_overwrites); };
 
 
   
 
    if (self->rtc_region) free(self->rtc_region);
 
    (void)self->video_quality_mode;
 
 
    (void)self->default_auto_archive_duration;
 
    (void)self->archived;
 
    (void)self->auto_archive_duration;
 
    (void)self->locked;
    (void)self->invitable;
}
static void discord_delete_channel_cleanup(struct discord_delete_channel *self) {
    if (self->reason) free(self->reason);
}
static void discord_get_channel_messages_cleanup(struct discord_get_channel_messages *self) {
 
   
 
 
   
 
 
   
 
 
    (void)self->limit;
 
}
void discord_create_message_cleanup(struct discord_create_message *self) {
    if (self->content) free(self->content);
    (void)self->tts;
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
    if (self->allowed_mentions) { discord_allowed_mention_cleanup(self->allowed_mentions); free(self->allowed_mentions); };
 
 
    if (self->message_reference) { discord_message_reference_cleanup(self->message_reference); free(self->message_reference); };
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    if (self->sticker_ids) { snowflakes_cleanup(self->sticker_ids); free(self->sticker_ids); };
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
 
   
 
}
static void discord_get_reactions_cleanup(struct discord_get_reactions *self) {
 
   
 
 
    (void)self->limit;
 
}
void discord_edit_message_cleanup(struct discord_edit_message *self) {
    if (self->content) free(self->content);
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
   
 
 
    if (self->allowed_mentions) { discord_allowed_mention_cleanup(self->allowed_mentions); free(self->allowed_mentions); };
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
}
static void discord_delete_message_cleanup(struct discord_delete_message *self) {
    if (self->reason) free(self->reason);
}
void discord_bulk_delete_messages_cleanup(struct discord_bulk_delete_messages *self) {
    if (self->reason) free(self->reason);
    if (self->messages) { snowflakes_cleanup(self->messages); free(self->messages); };
}
void discord_edit_channel_permissions_cleanup(struct discord_edit_channel_permissions *self) {
    if (self->reason) free(self->reason);
 
   
 
 
   
 
    (void)self->type;
}
void discord_create_channel_invite_cleanup(struct discord_create_channel_invite *self) {
    if (self->reason) free(self->reason);
 
    (void)self->max_age;
 
 
    (void)self->max_uses;
 
 
    (void)self->temporary;
 
 
    (void)self->unique;
 
 
    (void)self->target_type;
 
 
   
 
 
   
 
}
static void discord_delete_channel_permission_cleanup(struct discord_delete_channel_permission *self) {
    if (self->reason) free(self->reason);
}
void discord_follow_news_channel_cleanup(struct discord_follow_news_channel *self) {
 
   
 
}
static void discord_pin_message_cleanup(struct discord_pin_message *self) {
    if (self->reason) free(self->reason);
}
static void discord_unpin_message_cleanup(struct discord_unpin_message *self) {
    if (self->reason) free(self->reason);
}
void discord_group_dm_add_recipient_cleanup(struct discord_group_dm_add_recipient *self) {
    if (self->access_token) free(self->access_token);
    if (self->nick) free(self->nick);
}
void discord_start_thread_with_message_cleanup(struct discord_start_thread_with_message *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
 
    (void)self->auto_archive_duration;
 
 
    (void)self->rate_limit_per_user;
 
}
void discord_start_thread_without_message_cleanup(struct discord_start_thread_without_message *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
 
    (void)self->auto_archive_duration;
 
    (void)self->type;
    (void)self->invitable;
 
    (void)self->rate_limit_per_user;
 
}
void discord_list_active_threads_cleanup(struct discord_list_active_threads *self) {
 
    if (self->threads) { discord_channels_cleanup(self->threads); free(self->threads); };
 
 
    if (self->members) { discord_thread_members_cleanup(self->members); free(self->members); };
 
    (void)self->has_more;
}
void discord_emoji_cleanup(struct discord_emoji *self) {
   
    if (self->name) free(self->name);
 
    if (self->roles) { discord_roles_cleanup(self->roles); free(self->roles); };
 
 
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
 
    (void)self->require_colons;
    (void)self->managed;
    (void)self->animated;
    (void)self->available;
}
void discord_emojis_cleanup(struct discord_emojis *self) {
    __carray_free(self, struct discord_emoji, NULL, discord_emoji_cleanup(&__CARRAY_OPERAND_A));
}
void discord_create_guild_emoji_cleanup(struct discord_create_guild_emoji *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
    if (self->image) free(self->image);
 
    if (self->roles) { snowflakes_cleanup(self->roles); free(self->roles); };
 
}
void discord_modify_guild_emoji_cleanup(struct discord_modify_guild_emoji *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
    if (self->image) free(self->image);
 
    if (self->roles) { snowflakes_cleanup(self->roles); free(self->roles); };
 
}
static void discord_delete_guild_emoji_cleanup(struct discord_delete_guild_emoji *self) {
    if (self->reason) free(self->reason);
}





   
   


   
   
   


   
   


   
   
   
   
   


   
   
   
   


   
   
   
   


   
   

void discord_guild_cleanup(struct discord_guild *self) {
   
    if (self->name) free(self->name);
    if (self->icon) free(self->icon);
 
    if (self->icon_hash) free(self->icon_hash);
 
    if (self->splash) free(self->splash);
    if (self->discovery_splash) free(self->discovery_splash);
    (void)self->owner;
   
 
   
 
   
    (void)self->afk_timeout;
    (void)self->widget_enabled;
   
    (void)self->verification_level;
    (void)self->default_message_notifications;
    (void)self->explicit_content_filter;
    if (self->roles) { discord_roles_cleanup(self->roles); free(self->roles); };
    if (self->emojis) { discord_emojis_cleanup(self->emojis); free(self->emojis); };
    if (self->features) { strings_cleanup(self->features); free(self->features); };
    (void)self->mfa_level;
   
   
   
   
 
    ;
 
    (void)self->large;
    (void)self->unavailable;
    (void)self->member_count;
 
    if (self->voice_states) { discord_voice_states_cleanup(self->voice_states); free(self->voice_states); };
 
 
    if (self->members) { discord_guild_members_cleanup(self->members); free(self->members); };
 
 
    if (self->channels) { discord_channels_cleanup(self->channels); free(self->channels); };
 
 
    if (self->threads) { discord_channels_cleanup(self->threads); free(self->threads); };
 
 
    if (self->presences) { discord_presence_updates_cleanup(self->presences); free(self->presences); };
 
 
    (void)self->max_presences;
 
 
    (void)self->max_members;
 
    if (self->vanity_url_code) free(self->vanity_url_code);
    if (self->description) free(self->description);
    if (self->banner) free(self->banner);
    (void)self->premium_tier;
    (void)self->premium_subscription_count;
    if (self->preferred_locale) free(self->preferred_locale);
   
 
    (void)self->max_video_channel_users;
 
 
    (void)self->approximate_member_count;
 
 
    (void)self->approximate_presence_count;
 
 
    if (self->welcome_screen) { discord_welcome_screen_cleanup(self->welcome_screen); free(self->welcome_screen); };
 
    (void)self->nsfw_level;
 
    if (self->stage_instances) { discord_stage_instances_cleanup(self->stage_instances); free(self->stage_instances); };
 
 
    if (self->stickers) { discord_stickers_cleanup(self->stickers); free(self->stickers); };
 
 
    if (self->guild_scheduled_events) { discord_guild_scheduled_events_cleanup(self->guild_scheduled_events); free(self->guild_scheduled_events); };
 
    (void)self->premium_progress_bar_enabled;
}
void discord_guilds_cleanup(struct discord_guilds *self) {
    __carray_free(self, struct discord_guild, NULL, discord_guild_cleanup(&__CARRAY_OPERAND_A));
}
void discord_guild_preview_cleanup(struct discord_guild_preview *self) {
   
    if (self->name) free(self->name);
    if (self->icon) free(self->icon);
    if (self->splash) free(self->splash);
    if (self->discovery_splash) free(self->discovery_splash);
    if (self->emojis) { discord_emojis_cleanup(self->emojis); free(self->emojis); };
    if (self->features) { strings_cleanup(self->features); free(self->features); };
    (void)self->approximate_member_count;
    (void)self->approximate_presence_count;
    if (self->description) free(self->description);
    if (self->stickers) { discord_stickers_cleanup(self->stickers); free(self->stickers); };
}
void discord_guild_widget_settings_cleanup(struct discord_guild_widget_settings *self) {
    if (self->reason) free(self->reason);
    (void)self->enabled;
   
}
void discord_guild_widget_cleanup(struct discord_guild_widget *self) {
   
    if (self->name) free(self->name);
    if (self->instant_invite) free(self->instant_invite);
    if (self->channels) { discord_channels_cleanup(self->channels); free(self->channels); };
    if (self->members) { discord_users_cleanup(self->members); free(self->members); };
    (void)self->presence_count;
}
void discord_guild_member_cleanup(struct discord_guild_member *self) {
 
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
 
 
    if (self->nick) free(self->nick);
 
 
    if (self->avatar) free(self->avatar);
 
    if (self->roles) { snowflakes_cleanup(self->roles); free(self->roles); };
    ;
 
    ;
 
    (void)self->deaf;
    (void)self->muted;
    (void)self->pending;
 
   
 
    ;
   
}
void discord_guild_members_cleanup(struct discord_guild_members *self) {
    __carray_free(self, struct discord_guild_member, NULL, discord_guild_member_cleanup(&__CARRAY_OPERAND_A));
}
void discord_integration_cleanup(struct discord_integration *self) {
   
    if (self->name) free(self->name);
    if (self->type) free(self->type);
    (void)self->enabled;
    (void)self->syncing;
   
    (void)self->enable_emoticons;
    (void)self->expire_behavior;
    (void)self->expire_grace_period;
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
    if (self->account) { discord_integration_account_cleanup(self->account); free(self->account); };
    ;
    (void)self->subscriber_count;
    (void)self->revoked;
    if (self->application) { discord_integration_application_cleanup(self->application); free(self->application); };
   
}
void discord_integrations_cleanup(struct discord_integrations *self) {
    __carray_free(self, struct discord_integration, NULL, discord_integration_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_integration_account_cleanup(struct discord_integration_account *self) {
    if (self->id) free(self->id);
    if (self->name) free(self->name);
}
static void discord_integration_application_cleanup(struct discord_integration_application *self) {
   
    if (self->name) free(self->name);
    if (self->icon) free(self->icon);
    if (self->description) free(self->description);
    if (self->summary) free(self->summary);
 
    if (self->bot) { discord_user_cleanup(self->bot); free(self->bot); };
 
}
void discord_ban_cleanup(struct discord_ban *self) {
    if (self->reason) free(self->reason);
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
}
void discord_bans_cleanup(struct discord_bans *self) {
    __carray_free(self, struct discord_ban, NULL, discord_ban_cleanup(&__CARRAY_OPERAND_A));
}
void discord_welcome_screen_cleanup(struct discord_welcome_screen *self) {
    if (self->description) free(self->description);
 
    if (self->welcome_channels) { discord_welcome_screen_channels_cleanup(self->welcome_channels); free(self->welcome_channels); };
 
}
static void discord_welcome_screen_channel_cleanup(struct discord_welcome_screen_channel *self) {
   
    if (self->description) free(self->description);
   
    if (self->emoji_name) free(self->emoji_name);
}
static void discord_welcome_screen_channels_cleanup(struct discord_welcome_screen_channels *self) {
    __carray_free(self, struct discord_welcome_screen_channel, NULL, discord_welcome_screen_channel_cleanup(&__CARRAY_OPERAND_A));
}
void discord_prune_count_cleanup(struct discord_prune_count *self) {
    (void)self->pruned;
}
void discord_create_guild_cleanup(struct discord_create_guild *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
 
    if (self->region) free(self->region);
 
 
    if (self->icon) free(self->icon);
 
    (void)self->verification_level;
    (void)self->default_message_notifications;
    (void)self->explicit_content_filter;
 
    if (self->roles) { discord_roles_cleanup(self->roles); free(self->roles); };
 
 
    if (self->channels) { discord_channels_cleanup(self->channels); free(self->channels); };
 
 
   
 
    (void)self->afk_timeout;
   
   
}
void discord_modify_guild_cleanup(struct discord_modify_guild *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
    (void)self->verification_level;
    (void)self->default_message_notifications;
    (void)self->explicit_content_filter;
   
    (void)self->afk_timeout;
    if (self->icon) free(self->icon);
   
    if (self->splash) free(self->splash);
    if (self->discovery_splash) free(self->discovery_splash);
    if (self->banner) free(self->banner);
   
   
   
   
    if (self->preferred_locale) free(self->preferred_locale);
    if (self->features) { strings_cleanup(self->features); free(self->features); };
    if (self->description) free(self->description);
    (void)self->premium_progress_bar_enabled;
}
void discord_create_guild_channel_cleanup(struct discord_create_guild_channel *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
    (void)self->type;
    if (self->topic) free(self->topic);
 
    (void)self->bitrate;
 
 
    (void)self->user_limit;
 
    (void)self->rate_limit_per_user;
    (void)self->position;
    if (self->permission_overwrites) { discord_overwrites_cleanup(self->permission_overwrites); free(self->permission_overwrites); };
 
   
 
    (void)self->nsfw;
}
static void discord_modify_guild_channel_position_cleanup(struct discord_modify_guild_channel_position *self) {
   
 
    (void)self->position;
 
    (void)self->lock_category;
 
   
 
}
void discord_modify_guild_channel_positions_cleanup(struct discord_modify_guild_channel_positions *self) {
    __carray_free(self, struct discord_modify_guild_channel_position, NULL, discord_modify_guild_channel_position_cleanup(&__CARRAY_OPERAND_A));
}
void discord_list_active_guild_threads_cleanup(struct discord_list_active_guild_threads *self) {
    if (self->threads) { discord_channels_cleanup(self->threads); free(self->threads); };
    if (self->members) { discord_thread_members_cleanup(self->members); free(self->members); };
}
static void discord_list_guild_members_cleanup(struct discord_list_guild_members *self) {
    (void)self->limit;
   
}
static void discord_search_guild_members_cleanup(struct discord_search_guild_members *self) {
    if (self->query) free(self->query);
    (void)self->limit;
}
void discord_add_guild_member_cleanup(struct discord_add_guild_member *self) {
    if (self->access_token) free(self->access_token);
    if (self->nick) free(self->nick);
    if (self->roles) { snowflakes_cleanup(self->roles); free(self->roles); };
    (void)self->mute;
    (void)self->deaf;
}
void discord_modify_guild_member_cleanup(struct discord_modify_guild_member *self) {
    if (self->reason) free(self->reason);
 
    if (self->nick) free(self->nick);
 
 
    if (self->roles) { snowflakes_cleanup(self->roles); free(self->roles); };
 
 
    (void)self->mute;
 
 
    (void)self->deaf;
 
 
   
 
 
    ;
 
}
void discord_modify_current_member_cleanup(struct discord_modify_current_member *self) {
    if (self->reason) free(self->reason);
 
    if (self->nick) free(self->nick);
 
}
void discord_modify_current_user_nick_cleanup(struct discord_modify_current_user_nick *self) {
    if (self->reason) free(self->reason);
 
    if (self->nick) free(self->nick);
 
}
static void discord_add_guild_member_role_cleanup(struct discord_add_guild_member_role *self) {
    if (self->reason) free(self->reason);
}
static void discord_remove_guild_member_role_cleanup(struct discord_remove_guild_member_role *self) {
    if (self->reason) free(self->reason);
}
static void discord_remove_guild_member_cleanup(struct discord_remove_guild_member *self) {
    if (self->reason) free(self->reason);
}
void discord_create_guild_ban_cleanup(struct discord_create_guild_ban *self) {
    if (self->reason) free(self->reason);
 
    (void)self->delete_message_days;
 
}
static void discord_remove_guild_ban_cleanup(struct discord_remove_guild_ban *self) {
    if (self->reason) free(self->reason);
}
void discord_create_guild_role_cleanup(struct discord_create_guild_role *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
   
    (void)self->color;
    (void)self->hoist;
    if (self->icon) free(self->icon);
    if (self->unicode_emoji) free(self->unicode_emoji);
    (void)self->mentionable;
}
static void discord_modify_guild_role_position_cleanup(struct discord_modify_guild_role_position *self) {
   
 
    (void)self->position;
 
}
void discord_modify_guild_role_positions_cleanup(struct discord_modify_guild_role_positions *self) {
    __carray_free(self, struct discord_modify_guild_role_position, NULL, discord_modify_guild_role_position_cleanup(&__CARRAY_OPERAND_A));
}
void discord_modify_guild_role_cleanup(struct discord_modify_guild_role *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
   
    (void)self->color;
    (void)self->hoist;
    if (self->icon) free(self->icon);
    if (self->unicode_emoji) free(self->unicode_emoji);
    (void)self->mentionable;
}
static void discord_delete_guild_role_cleanup(struct discord_delete_guild_role *self) {
    if (self->reason) free(self->reason);
}
static void discord_get_guild_prune_count_cleanup(struct discord_get_guild_prune_count *self) {
 
    (void)self->days;
 
    if (self->include_roles) { snowflakes_cleanup(self->include_roles); free(self->include_roles); };
}
void discord_begin_guild_prune_cleanup(struct discord_begin_guild_prune *self) {
    if (self->reason) free(self->reason);
 
    (void)self->days;
 
    (void)self->compute_prune_count;
    if (self->include_roles) { snowflakes_cleanup(self->include_roles); free(self->include_roles); };
}
static void discord_delete_guild_integrations_cleanup(struct discord_delete_guild_integrations *self) {
    if (self->reason) free(self->reason);
 
    (void)self->days;
 
    if (self->include_roles) { snowflakes_cleanup(self->include_roles); free(self->include_roles); };
}
static void discord_get_guild_widget_image_cleanup(struct discord_get_guild_widget_image *self) {
 
    if (self->style) free(self->style);
 
}
void discord_modify_guild_welcome_screen_cleanup(struct discord_modify_guild_welcome_screen *self) {
    if (self->reason) free(self->reason);
    (void)self->enabled;
    if (self->welcome_channels) { discord_welcome_screen_channels_cleanup(self->welcome_channels); free(self->welcome_channels); };
 
    if (self->description) free(self->description);
 
}
void discord_modify_current_user_voice_state_cleanup(struct discord_modify_current_user_voice_state *self) {
   
    (void)self->suppress;
 
    ;
 
}
void discord_modify_user_voice_state_cleanup(struct discord_modify_user_voice_state *self) {
   
    (void)self->suppress;
}

   


   
   
   


   
   
   
   

void discord_guild_scheduled_event_cleanup(struct discord_guild_scheduled_event *self) {
   
   
   
   
    if (self->name) free(self->name);
    if (self->description) free(self->description);
    ;
    ;
 
    (void)self->privacy_level;
 
 
    (void)self->status;
 
 
    (void)self->entity_type;
 
   
 
    if (self->entity_metadata) { discord_guild_scheduled_event_entity_metadata_cleanup(self->entity_metadata); free(self->entity_metadata); };
 
 
    if (self->creator) { discord_user_cleanup(self->creator); free(self->creator); };
 
    (void)self->user_count;
    if (self->image) free(self->image);
}
static void discord_guild_scheduled_event_entity_metadata_cleanup(struct discord_guild_scheduled_event_entity_metadata *self) {
 
    if (self->location) free(self->location);
 
}
void discord_guild_scheduled_events_cleanup(struct discord_guild_scheduled_events *self) {
    __carray_free(self, struct discord_guild_scheduled_event, NULL, discord_guild_scheduled_event_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_guild_scheduled_event_user_cleanup(struct discord_guild_scheduled_event_user *self) {
   
 
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
 
 
    if (self->member) { discord_guild_member_cleanup(self->member); free(self->member); };
 
}
void discord_guild_scheduled_event_users_cleanup(struct discord_guild_scheduled_event_users *self) {
    __carray_free(self, struct discord_guild_scheduled_event_user, NULL, discord_guild_scheduled_event_user_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_list_guild_scheduled_events_cleanup(struct discord_list_guild_scheduled_events *self) {
    (void)self->with_user_count;
}
void discord_create_guild_scheduled_event_cleanup(struct discord_create_guild_scheduled_event *self) {
    if (self->reason) free(self->reason);
 
   
 
 
    if (self->entity_metadata) { discord_guild_scheduled_event_entity_metadata_cleanup(self->entity_metadata); free(self->entity_metadata); };
 
    if (self->name) free(self->name);
 
    (void)self->privacy_level;
 
 
    ;
 
 
    ;
 
 
    if (self->description) free(self->description);
 
 
    (void)self->entity_type;
 
 
    if (self->image) free(self->image);
 
}
static void discord_get_guild_scheduled_event_cleanup(struct discord_get_guild_scheduled_event *self) {
    (void)self->with_user_count;
}
void discord_modify_guild_scheduled_event_cleanup(struct discord_modify_guild_scheduled_event *self) {
    if (self->reason) free(self->reason);
 
   
 
 
    if (self->entity_metadata) { discord_guild_scheduled_event_entity_metadata_cleanup(self->entity_metadata); free(self->entity_metadata); };
 
    if (self->name) free(self->name);
 
    ;
 
 
    ;
 
 
    if (self->description) free(self->description);
 
 
    (void)self->entity_type;
 
 
    (void)self->status;
 
 
    if (self->image) free(self->image);
 
}
static void discord_get_guild_scheduled_event_users_cleanup(struct discord_get_guild_scheduled_event_users *self) {
    (void)self->limit;
    (void)self->with_member;
 
   
 
 
   
 
}
void discord_guild_template_cleanup(struct discord_guild_template *self) {
    if (self->code) free(self->code);
    if (self->name) free(self->name);
    if (self->description) free(self->description);
    (void)self->usage_count;
   
    if (self->creator) { discord_user_cleanup(self->creator); free(self->creator); };
    ;
    ;
   
    if (self->serialized_source_guild) { discord_guild_cleanup(self->serialized_source_guild); free(self->serialized_source_guild); };
    (void)self->is_dirty;
}
void discord_guild_templates_cleanup(struct discord_guild_templates *self) {
    __carray_free(self, struct discord_guild_template, NULL, discord_guild_template_cleanup(&__CARRAY_OPERAND_A));
}
void discord_create_guild_from_guild_template_cleanup(struct discord_create_guild_from_guild_template *self) {
    if (self->name) free(self->name);
 
    if (self->icon) free(self->icon);
 
}
void discord_create_guild_template_cleanup(struct discord_create_guild_template *self) {
    if (self->name) free(self->name);
 
    if (self->description) free(self->description);
 
}
void discord_modify_guild_template_cleanup(struct discord_modify_guild_template *self) {
 
    if (self->name) free(self->name);
 
 
    if (self->description) free(self->description);
 
}

   
   

void discord_stage_instance_cleanup(struct discord_stage_instance *self) {
   
   
   
    if (self->topic) free(self->topic);
 
    (void)self->privacy_level;
 
    (void)self->discoverable_disabled;
}
static void discord_stage_instances_cleanup(struct discord_stage_instances *self) {
    __carray_free(self, struct discord_stage_instance, NULL, discord_stage_instance_cleanup(&__CARRAY_OPERAND_A));
}
void discord_create_stage_instance_cleanup(struct discord_create_stage_instance *self) {
    if (self->reason) free(self->reason);
   
    if (self->topic) free(self->topic);
 
    (void)self->privacy_level;
 
}
void discord_modify_stage_instance_cleanup(struct discord_modify_stage_instance *self) {
    if (self->reason) free(self->reason);
    if (self->topic) free(self->topic);
 
    (void)self->privacy_level;
 
}
static void discord_delete_stage_instance_cleanup(struct discord_delete_stage_instance *self) {
    if (self->reason) free(self->reason);
}

   
   


   
   
   

void discord_sticker_cleanup(struct discord_sticker *self) {
   
 
   
 
    if (self->name) free(self->name);
    if (self->description) free(self->description);
    if (self->tags) free(self->tags);
 
    (void)self->type;
 
 
    (void)self->format_type;
 
    (void)self->available;
 
   
 
 
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
 
    (void)self->sort_value;
}
void discord_stickers_cleanup(struct discord_stickers *self) {
    __carray_free(self, struct discord_sticker, NULL, discord_sticker_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_sticker_item_cleanup(struct discord_sticker_item *self) {
   
    if (self->name) free(self->name);
 
    (void)self->format_type;
 
}
static void discord_sticker_items_cleanup(struct discord_sticker_items *self) {
    __carray_free(self, struct discord_sticker_item, NULL, discord_sticker_item_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_sticker_pack_cleanup(struct discord_sticker_pack *self) {
   
 
    if (self->stickers) { discord_stickers_cleanup(self->stickers); free(self->stickers); };
 
    if (self->name) free(self->name);
   
 
   
 
    if (self->description) free(self->description);
 
   
 
}
void discord_sticker_packs_cleanup(struct discord_sticker_packs *self) {
    __carray_free(self, struct discord_sticker_pack, NULL, discord_sticker_pack_cleanup(&__CARRAY_OPERAND_A));
}
void discord_list_nitro_sticker_packs_cleanup(struct discord_list_nitro_sticker_packs *self) {
    if (self->sticker_packs) { discord_sticker_packs_cleanup(self->sticker_packs); free(self->sticker_packs); };
}
static void discord_create_guild_sticker_cleanup(struct discord_create_guild_sticker *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
    if (self->description) free(self->description);
    if (self->tags) free(self->tags);
    if (self->file) { discord_attachment_cleanup(self->file); free(self->file); };
}
void discord_modify_guild_sticker_cleanup(struct discord_modify_guild_sticker *self) {
    if (self->name) free(self->name);
    if (self->description) free(self->description);
    if (self->tags) free(self->tags);
}
static void discord_delete_guild_sticker_cleanup(struct discord_delete_guild_sticker *self) {
    if (self->reason) free(self->reason);
}
















   
   
   


   
   

void discord_user_cleanup(struct discord_user *self) {
   
    if (self->username) free(self->username);
    if (self->discriminator) free(self->discriminator);
    if (self->avatar) free(self->avatar);
    (void)self->bot;
    ;
    (void)self->mfa_enabled;
    if (self->banner) free(self->banner);
    (void)self->accent_color;
    if (self->locale) free(self->locale);
    (void)self->verified;
    if (self->email) free(self->email);
   
    (void)self->premium_type;
   
}
void discord_users_cleanup(struct discord_users *self) {
    __carray_free(self, struct discord_user, NULL, discord_user_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_connection_cleanup(struct discord_connection *self) {
   
    if (self->name) free(self->name);
    if (self->type) free(self->type);
    (void)self->revoked;
 
    if (self->integrations) { discord_integrations_cleanup(self->integrations); free(self->integrations); };
 
    (void)self->verified;
    (void)self->friend_sync;
    (void)self->show_activity;
    (void)self->visibility;
}
void discord_connections_cleanup(struct discord_connections *self) {
    __carray_free(self, struct discord_connection, NULL, discord_connection_cleanup(&__CARRAY_OPERAND_A));
}
void discord_modify_current_user_cleanup(struct discord_modify_current_user *self) {
 
    if (self->username) free(self->username);
 
 
    if (self->avatar) free(self->avatar);
 
}
static void discord_get_current_user_guilds_cleanup(struct discord_get_current_user_guilds *self) {
 
   
 
 
   
 
 
    (void)self->limit;
 
}
void discord_create_dm_cleanup(struct discord_create_dm *self) {
 
   
 
}
void discord_create_group_dm_cleanup(struct discord_create_group_dm *self) {
 
    if (self->access_tokens) { snowflakes_cleanup(self->access_tokens); free(self->access_tokens); };
 
 
    if (self->nicks) { strings_cleanup(self->nicks); free(self->nicks); };
 
}
void discord_voice_state_cleanup(struct discord_voice_state *self) {
   
   
   
    if (self->member) { discord_guild_member_cleanup(self->member); free(self->member); };
    if (self->session_id) free(self->session_id);
    (void)self->deaf;
    (void)self->mute;
    (void)self->self_deaf;
    (void)self->self_mute;
    (void)self->self_stream;
    (void)self->self_video;
    (void)self->suppress;
 
    ;
 
}
void discord_voice_states_cleanup(struct discord_voice_states *self) {
    __carray_free(self, struct discord_voice_state, NULL, discord_voice_state_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_voice_region_cleanup(struct discord_voice_region *self) {
    if (self->id) free(self->id);
    if (self->name) free(self->name);
    (void)self->optimal;
    (void)self->deprecated;
    (void)self->custom;
}
void discord_voice_regions_cleanup(struct discord_voice_regions *self) {
    __carray_free(self, struct discord_voice_region, NULL, discord_voice_region_cleanup(&__CARRAY_OPERAND_A));
}

   
   
   

void discord_webhook_cleanup(struct discord_webhook *self) {
   
 
    (void)self->type;
 
   
   
 
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
 
    if (self->name) free(self->name);
    if (self->token) free(self->token);
   
 
    if (self->source_channel) { discord_channel_cleanup(self->source_channel); free(self->source_channel); };
 
    if (self->url) free(self->url);
}
void discord_webhooks_cleanup(struct discord_webhooks *self) {
    __carray_free(self, struct discord_webhook, NULL, discord_webhook_cleanup(&__CARRAY_OPERAND_A));
}
void discord_create_webhook_cleanup(struct discord_create_webhook *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
 
    if (self->avatar) free(self->avatar);
 
}
void discord_modify_webhook_cleanup(struct discord_modify_webhook *self) {
    if (self->reason) free(self->reason);
    if (self->name) free(self->name);
 
    if (self->avatar) free(self->avatar);
 
   
}
static void discord_delete_webhook_cleanup(struct discord_delete_webhook *self) {
    if (self->reason) free(self->reason);
}
void discord_modify_webhook_with_token_cleanup(struct discord_modify_webhook_with_token *self) {
    if (self->name) free(self->name);
 
    if (self->avatar) free(self->avatar);
 
}
void discord_execute_webhook_cleanup(struct discord_execute_webhook *self) {
    (void)self->wait;
   
    if (self->content) free(self->content);
    if (self->username) free(self->username);
    if (self->avatar_url) free(self->avatar_url);
    (void)self->tts;
 
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
 
    if (self->allowed_mentions) { discord_allowed_mention_cleanup(self->allowed_mentions); free(self->allowed_mentions); };
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
 
   
 
}
static void discord_get_webhook_message_cleanup(struct discord_get_webhook_message *self) {
 
   
 
}
void discord_edit_webhook_message_cleanup(struct discord_edit_webhook_message *self) {
   
    if (self->content) free(self->content);
 
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
 
    if (self->allowed_mentions) { discord_allowed_mention_cleanup(self->allowed_mentions); free(self->allowed_mentions); };
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
}
static void discord_delete_webhook_message_cleanup(struct discord_delete_webhook_message *self) {
 
   
 
}





























   
   
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   

static void discord_activity_cleanup(struct discord_activity *self) {
 
    if (self->name) free(self->name);
 
    (void)self->type;
 
    if (self->url) free(self->url);
 
 
    ;
 
 
    if (self->timestamps) { discord_activity_timestamps_cleanup(self->timestamps); free(self->timestamps); };
 
 
   
 
 
    if (self->details) free(self->details);
 
 
    if (self->state) free(self->state);
 
 
    if (self->emoji) { discord_activity_emoji_cleanup(self->emoji); free(self->emoji); };
 
 
    if (self->party) { discord_activity_party_cleanup(self->party); free(self->party); };
 
 
    if (self->assets) { discord_activity_assets_cleanup(self->assets); free(self->assets); };
 
 
    if (self->secrets) { discord_activity_secrets_cleanup(self->secrets); free(self->secrets); };
 
    (void)self->instance;
   
 
    if (self->buttons) { discord_activity_buttons_cleanup(self->buttons); free(self->buttons); };
 
}
static void discord_activities_cleanup(struct discord_activities *self) {
    __carray_free(self, struct discord_activity, NULL, discord_activity_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_activity_timestamps_cleanup(struct discord_activity_timestamps *self) {
    ;
    ;
}
static void discord_activity_emoji_cleanup(struct discord_activity_emoji *self) {
    if (self->name) free(self->name);
   
    (void)self->animated;
}
static void discord_activity_party_cleanup(struct discord_activity_party *self) {
    if (self->id) free(self->id);
    if (self->size) { integers_cleanup(self->size); free(self->size); };
}
static void discord_activity_assets_cleanup(struct discord_activity_assets *self) {
    if (self->large_image) free(self->large_image);
    if (self->large_text) free(self->large_text);
    if (self->small_image) free(self->small_image);
    if (self->small_text) free(self->small_text);
}
static void discord_activity_secrets_cleanup(struct discord_activity_secrets *self) {
    if (self->join) free(self->join);
    if (self->spectate) free(self->spectate);
    if (self->match) free(self->match);
}
static void discord_activity_button_cleanup(struct discord_activity_button *self) {
    if (self->label) free(self->label);
    if (self->url) free(self->url);
}
static void discord_activity_buttons_cleanup(struct discord_activity_buttons *self) {
    __carray_free(self, struct discord_activity_button, NULL, discord_activity_button_cleanup(&__CARRAY_OPERAND_A));
}
void discord_presence_update_cleanup(struct discord_presence_update *self) {
 
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
 
 
   
 
 
    if (self->status) free(self->status);
 
 
    if (self->client_status) { discord_client_status_cleanup(self->client_status); free(self->client_status); };
 
 
    if (self->activities) { discord_activities_cleanup(self->activities); free(self->activities); };
 
 
    ;
 
    (void)self->afk;
}
static void discord_client_status_cleanup(struct discord_client_status *self) {
    if (self->desktop) free(self->desktop);
    if (self->mobile) free(self->mobile);
    if (self->web) free(self->web);
}
static void discord_presence_updates_cleanup(struct discord_presence_updates *self) {
    __carray_free(self, struct discord_presence_update, NULL, discord_presence_update_cleanup(&__CARRAY_OPERAND_A));
}
void discord_identify_cleanup(struct discord_identify *self) {
    if (self->token) free(self->token);
    if (self->properties) { discord_identify_connection_cleanup(self->properties); free(self->properties); };
    (void)self->compress;
    (void)self->large_threshold;
 
    if (self->shard) { integers_cleanup(self->shard); free(self->shard); };
 
 
    if (self->presence) { discord_presence_update_cleanup(self->presence); free(self->presence); };
 
   
}
static void discord_identify_connection_cleanup(struct discord_identify_connection *self) {
    if (self->os) free(self->os);
    if (self->browser) free(self->browser);
    if (self->device) free(self->device);
}
void discord_resume_cleanup(struct discord_resume *self) {
    if (self->token) free(self->token);
    if (self->session_id) free(self->session_id);
    (void)self->seq;
}
void discord_request_guild_members_cleanup(struct discord_request_guild_members *self) {
   
    if (self->query) free(self->query);
    (void)self->limit;
    (void)self->presences;
 
    if (self->user_ids) { snowflakes_cleanup(self->user_ids); free(self->user_ids); };
 
 
    if (self->nonce) free(self->nonce);
 
}
void discord_update_voice_state_cleanup(struct discord_update_voice_state *self) {
   
   
    (void)self->self_mute;
    (void)self->self_deaf;
}
void discord_ready_cleanup(struct discord_ready *self) {
    (void)self->v;
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
    if (self->guilds) { discord_guilds_cleanup(self->guilds); free(self->guilds); };
    if (self->session_id) free(self->session_id);
    if (self->shard) { integers_cleanup(self->shard); free(self->shard); };
    if (self->application) { discord_application_cleanup(self->application); free(self->application); };
}
void discord_auto_moderation_action_execution_cleanup(struct discord_auto_moderation_action_execution *self) {
   
    if (self->action) { discord_auto_moderation_action_cleanup(self->action); free(self->action); };
    (void)self->rule_trigger_type;
   
   
   
   
    if (self->content) free(self->content);
    if (self->matched_keyword) free(self->matched_keyword);
    if (self->matched_content) free(self->matched_content);
}
void discord_thread_list_sync_cleanup(struct discord_thread_list_sync *self) {
   
    if (self->channel_ids) { snowflakes_cleanup(self->channel_ids); free(self->channel_ids); };
    if (self->threads) { discord_channels_cleanup(self->threads); free(self->threads); };
    if (self->members) { discord_thread_members_cleanup(self->members); free(self->members); };
}
void discord_thread_members_update_cleanup(struct discord_thread_members_update *self) {
   
   
    (void)self->member_count;
    if (self->added_members) { discord_thread_members_cleanup(self->added_members); free(self->added_members); };
    if (self->removed_member_ids) { snowflakes_cleanup(self->removed_member_ids); free(self->removed_member_ids); };
}
void discord_channel_pins_update_cleanup(struct discord_channel_pins_update *self) {
   
   
    ;
}
void discord_guild_ban_add_cleanup(struct discord_guild_ban_add *self) {
   
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
}
void discord_guild_ban_remove_cleanup(struct discord_guild_ban_remove *self) {
   
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
}
void discord_guild_emojis_update_cleanup(struct discord_guild_emojis_update *self) {
   
    if (self->emojis) { discord_emojis_cleanup(self->emojis); free(self->emojis); };
}
void discord_guild_stickers_update_cleanup(struct discord_guild_stickers_update *self) {
   
    if (self->stickers) { discord_stickers_cleanup(self->stickers); free(self->stickers); };
}
void discord_guild_integrations_update_cleanup(struct discord_guild_integrations_update *self) {
   
}
void discord_guild_member_remove_cleanup(struct discord_guild_member_remove *self) {
   
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
}
void discord_guild_member_update_cleanup(struct discord_guild_member_update *self) {
   
    if (self->roles) { snowflakes_cleanup(self->roles); free(self->roles); };
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
    if (self->nick) free(self->nick);
    if (self->avatar) free(self->avatar);
    ;
    ;
    (void)self->deaf;
    (void)self->mute;
    (void)self->pending;
    ;
}
void discord_guild_members_chunk_cleanup(struct discord_guild_members_chunk *self) {
   
    if (self->members) { discord_guild_members_cleanup(self->members); free(self->members); };
    (void)self->chunk_index;
    (void)self->chunk_count;
    if (self->not_found) { snowflakes_cleanup(self->not_found); free(self->not_found); };
    if (self->presences) { discord_presence_updates_cleanup(self->presences); free(self->presences); };
    if (self->nonce) free(self->nonce);
}
void discord_guild_role_create_cleanup(struct discord_guild_role_create *self) {
   
    if (self->role) { discord_role_cleanup(self->role); free(self->role); };
}
void discord_guild_role_update_cleanup(struct discord_guild_role_update *self) {
   
    if (self->role) { discord_role_cleanup(self->role); free(self->role); };
}
void discord_guild_role_delete_cleanup(struct discord_guild_role_delete *self) {
   
   
}
void discord_guild_scheduled_event_user_add_cleanup(struct discord_guild_scheduled_event_user_add *self) {
   
   
   
}
void discord_guild_scheduled_event_user_remove_cleanup(struct discord_guild_scheduled_event_user_remove *self) {
   
   
   
}
void discord_integration_delete_cleanup(struct discord_integration_delete *self) {
   
   
   
}
void discord_invite_create_cleanup(struct discord_invite_create *self) {
   
    if (self->code) free(self->code);
    ;
   
    if (self->inviter) { discord_user_cleanup(self->inviter); free(self->inviter); };
    (void)self->max_age;
    (void)self->max_uses;
    (void)self->target_type;
    if (self->target_user) { discord_user_cleanup(self->target_user); free(self->target_user); };
    if (self->target_application) { discord_application_cleanup(self->target_application); free(self->target_application); };
    (void)self->temporary;
    (void)self->uses;
}
void discord_invite_delete_cleanup(struct discord_invite_delete *self) {
   
   
    if (self->code) free(self->code);
}
void discord_message_delete_cleanup(struct discord_message_delete *self) {
   
   
   
}
void discord_message_delete_bulk_cleanup(struct discord_message_delete_bulk *self) {
    if (self->ids) { snowflakes_cleanup(self->ids); free(self->ids); };
   
   
}
void discord_message_reaction_add_cleanup(struct discord_message_reaction_add *self) {
   
   
   
   
    if (self->member) { discord_guild_member_cleanup(self->member); free(self->member); };
    if (self->emoji) { discord_emoji_cleanup(self->emoji); free(self->emoji); };
}
void discord_message_reaction_remove_cleanup(struct discord_message_reaction_remove *self) {
   
   
   
   
    if (self->emoji) { discord_emoji_cleanup(self->emoji); free(self->emoji); };
}
void discord_message_reaction_remove_all_cleanup(struct discord_message_reaction_remove_all *self) {
   
   
   
}
void discord_message_reaction_remove_emoji_cleanup(struct discord_message_reaction_remove_emoji *self) {
   
   
   
    if (self->emoji) { discord_emoji_cleanup(self->emoji); free(self->emoji); };
}
void discord_typing_start_cleanup(struct discord_typing_start *self) {
   
   
   
    ;
    if (self->member) { discord_guild_member_cleanup(self->member); free(self->member); };
}
void discord_voice_server_update_cleanup(struct discord_voice_server_update *self) {
    if (self->token) free(self->token);
   
    if (self->endpoint) free(self->endpoint);
}
void discord_webhooks_update_cleanup(struct discord_webhooks_update *self) {
   
   
}
void discord_session_start_limit_cleanup(struct discord_session_start_limit *self) {
    (void)self->total;
    (void)self->remaining;
    (void)self->reset_after;
    (void)self->max_concurrency;
}
void discord_auth_response_cleanup(struct discord_auth_response *self) {
    if (self->application) { discord_application_cleanup(self->application); free(self->application); };
    if (self->scopes) { strings_cleanup(self->scopes); free(self->scopes); };
    ;
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
}









































void discord_role_cleanup(struct discord_role *self) {
   
    if (self->name) free(self->name);
    (void)self->color;
    (void)self->hoist;
 
    if (self->icon) free(self->icon);
 
 
    if (self->unicode_emoji) free(self->unicode_emoji);
 
    (void)self->position;
   
    (void)self->managed;
    (void)self->mentionable;
 
    if (self->tags) { discord_role_tag_cleanup(self->tags); free(self->tags); };
 
}
void discord_roles_cleanup(struct discord_roles *self) {
    __carray_free(self, struct discord_role, NULL, discord_role_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_role_tag_cleanup(struct discord_role_tag *self) {
 
   
 
 
   
 
    (void)self->premium_subscribe;
}

   
   

void discord_team_cleanup(struct discord_team *self) {
    if (self->icon) free(self->icon);
   
 
    if (self->members) { discord_team_members_cleanup(self->members); free(self->members); };
 
    if (self->name) free(self->name);
   
}
static void discord_team_member_cleanup(struct discord_team_member *self) {
    (void)self->membership_state;
 
    if (self->permissions) { bitmasks_cleanup(self->permissions); free(self->permissions); };
 
   
 
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
 
}
static void discord_team_members_cleanup(struct discord_team_members *self) {
    __carray_free(self, struct discord_team_member, NULL, discord_team_member_cleanup(&__CARRAY_OPERAND_A));
}




   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   
   
   


   
   
   


   
   
   
   
   
   
   
   
   
   
   


   
   
   

void discord_application_command_cleanup(struct discord_application_command *self) {
 
   
 
 
    (void)self->type;
 
 
   
 
 
   
 
 
    if (self->name) free(self->name);
 
 
    if (self->description) free(self->description);
 
 
    if (self->options) { discord_application_command_options_cleanup(self->options); free(self->options); };
 
 
   
 
 
    (void)self->dm_permission;
 
 
    (void)self->default_permission;
 
 
   
 
}
void discord_application_commands_cleanup(struct discord_application_commands *self) {
    __carray_free(self, struct discord_application_command, NULL, discord_application_command_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_application_command_option_cleanup(struct discord_application_command_option *self) {
    (void)self->type;
    if (self->name) free(self->name);
    if (self->description) free(self->description);
 
    (void)self->required;
 
 
    if (self->choices) { discord_application_command_option_choices_cleanup(self->choices); free(self->choices); };
 
 
    if (self->options) { discord_application_command_options_cleanup(self->options); free(self->options); };
 
 
    if (self->channel_types) { integers_cleanup(self->channel_types); free(self->channel_types); };
 
 
    if (self->min_value) free(self->min_value);
 
 
    if (self->max_value) free(self->max_value);
 
 
    (void)self->autocomplete;
 
}
static void discord_application_command_options_cleanup(struct discord_application_command_options *self) {
    __carray_free(self, struct discord_application_command_option, NULL, discord_application_command_option_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_application_command_option_choice_cleanup(struct discord_application_command_option_choice *self) {
    if (self->name) free(self->name);
    if (self->value) free(self->value);
}
static void discord_application_command_option_choices_cleanup(struct discord_application_command_option_choices *self) {
    __carray_free(self, struct discord_application_command_option_choice, NULL, discord_application_command_option_choice_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_application_command_interaction_data_option_cleanup(struct discord_application_command_interaction_data_option *self) {
    if (self->name) free(self->name);
    (void)self->type;
 
    if (self->value) free(self->value);
 
 
    if (self->options) { discord_application_command_interaction_data_options_cleanup(self->options); free(self->options); };
 
    (void)self->focused;
}
static void discord_application_command_interaction_data_options_cleanup(struct discord_application_command_interaction_data_options *self) {
    __carray_free(self, struct discord_application_command_interaction_data_option, NULL, discord_application_command_interaction_data_option_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_guild_application_command_permission_cleanup(struct discord_guild_application_command_permission *self) {
   
   
   
    if (self->permissions) { discord_application_command_permissions_cleanup(self->permissions); free(self->permissions); };
}
void discord_guild_application_command_permissions_cleanup(struct discord_guild_application_command_permissions *self) {
    __carray_free(self, struct discord_guild_application_command_permission, NULL, discord_guild_application_command_permission_cleanup(&__CARRAY_OPERAND_A));
}
void discord_application_command_permission_cleanup(struct discord_application_command_permission *self) {
   
    (void)self->type;
    (void)self->permission;
}
void discord_application_command_permissions_cleanup(struct discord_application_command_permissions *self) {
    __carray_free(self, struct discord_application_command_permission, NULL, discord_application_command_permission_cleanup(&__CARRAY_OPERAND_A));
}
void discord_create_global_application_command_cleanup(struct discord_create_global_application_command *self) {
    if (self->name) free(self->name);
    if (self->description) free(self->description);
 
    if (self->options) { discord_application_command_options_cleanup(self->options); free(self->options); };
 
 
   
 
    (void)self->dm_permission;
    (void)self->default_permission;
 
    (void)self->type;
 
}
void discord_edit_global_application_command_cleanup(struct discord_edit_global_application_command *self) {
    if (self->name) free(self->name);
    if (self->description) free(self->description);
 
    if (self->options) { discord_application_command_options_cleanup(self->options); free(self->options); };
 
 
   
 
    (void)self->dm_permission;
    (void)self->default_permission;
}
void discord_create_guild_application_command_cleanup(struct discord_create_guild_application_command *self) {
    if (self->name) free(self->name);
    if (self->description) free(self->description);
 
    if (self->options) { discord_application_command_options_cleanup(self->options); free(self->options); };
 
 
   
 
    (void)self->dm_permission;
    (void)self->default_permission;
 
    (void)self->type;
 
}
void discord_edit_guild_application_command_cleanup(struct discord_edit_guild_application_command *self) {
    if (self->name) free(self->name);
    if (self->description) free(self->description);
 
    if (self->options) { discord_application_command_options_cleanup(self->options); free(self->options); };
 
 
   
 
    (void)self->default_permission;
}
void discord_bulk_overwrite_guild_application_commands_cleanup(struct discord_bulk_overwrite_guild_application_commands *self) {
   
    if (self->name) free(self->name);
    if (self->name_localizations) { strings_cleanup(self->name_localizations); free(self->name_localizations); };
    if (self->description) free(self->description);
    if (self->description_localizations) { strings_cleanup(self->description_localizations); free(self->description_localizations); };
 
    if (self->options) { discord_application_command_options_cleanup(self->options); free(self->options); };
 
 
   
 
    (void)self->dm_permission;
 
    (void)self->type;
 
}

   
   
   
   


   
   
   
   
   
   
   

void discord_component_cleanup(struct discord_component *self) {
 
    (void)self->type;
 
    if (self->custom_id) free(self->custom_id);
    (void)self->disabled;
 
    (void)self->style;
 
    if (self->label) free(self->label);
 
    if (self->emoji) { discord_emoji_cleanup(self->emoji); free(self->emoji); };
 
    if (self->url) free(self->url);
 
    if (self->options) { discord_select_options_cleanup(self->options); free(self->options); };
 
    if (self->placeholder) free(self->placeholder);
 
    (void)self->min_values;
 
 
    (void)self->max_values;
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
    (void)self->min_length;
    (void)self->max_length;
    (void)self->required;
    if (self->value) free(self->value);
}
void discord_components_cleanup(struct discord_components *self) {
    __carray_free(self, struct discord_component, NULL, discord_component_cleanup(&__CARRAY_OPERAND_A));
}
static void discord_select_option_cleanup(struct discord_select_option *self) {
    if (self->label) free(self->label);
    if (self->value) free(self->value);
    if (self->description) free(self->description);
 
    if (self->emoji) { discord_emoji_cleanup(self->emoji); free(self->emoji); };
 
    ;
}
void discord_select_options_cleanup(struct discord_select_options *self) {
    __carray_free(self, struct discord_select_option, NULL, discord_select_option_cleanup(&__CARRAY_OPERAND_A));
}

   
   
   
   
   


   
   
   
   
   
   
   

void discord_interaction_cleanup(struct discord_interaction *self) {
   
   
    (void)self->type;
    if (self->data) { discord_interaction_data_cleanup(self->data); free(self->data); };
   
   
    if (self->member) { discord_guild_member_cleanup(self->member); free(self->member); };
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
    if (self->token) free(self->token);
    (void)self->version;
    if (self->message) { discord_message_cleanup(self->message); free(self->message); };
    if (self->locale) free(self->locale);
    if (self->guild_locale) free(self->guild_locale);
}
static void discord_interaction_data_cleanup(struct discord_interaction_data *self) {
   
    if (self->name) free(self->name);
    (void)self->type;
    if (self->resolved) { discord_resolved_data_cleanup(self->resolved); free(self->resolved); };
    if (self->options) { discord_application_command_interaction_data_options_cleanup(self->options); free(self->options); };
    if (self->custom_id) free(self->custom_id);
    (void)self->component_type;
    if (self->values) { strings_cleanup(self->values); free(self->values); };
   
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
}
static void discord_resolved_data_cleanup(struct discord_resolved_data *self) {
    if (self->users) free(self->users);
    if (self->members) free(self->members);
    if (self->roles) free(self->roles);
    if (self->channels) free(self->channels);
    if (self->messages) free(self->messages);
    if (self->attachments) free(self->attachments);
}
static void discord_message_interaction_cleanup(struct discord_message_interaction *self) {
   
    (void)self->type;
    if (self->name) free(self->name);
    if (self->user) { discord_user_cleanup(self->user); free(self->user); };
    if (self->member) { discord_guild_member_cleanup(self->member); free(self->member); };
}
void discord_interaction_response_cleanup(struct discord_interaction_response *self) {
    (void)self->type;
 
    if (self->data) { discord_interaction_callback_data_cleanup(self->data); free(self->data); };
 
}
static void discord_interaction_callback_data_cleanup(struct discord_interaction_callback_data *self) {
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    (void)self->tts;
 
 
    if (self->content) free(self->content);
 
 
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
 
   
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
    if (self->choices) { discord_application_command_option_choices_cleanup(self->choices); free(self->choices); };
    if (self->custom_id) free(self->custom_id);
    if (self->title) free(self->title);
}
void discord_edit_original_interaction_response_cleanup(struct discord_edit_original_interaction_response *self) {
   
    if (self->content) free(self->content);
 
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
 
    if (self->allowed_mentions) { discord_allowed_mention_cleanup(self->allowed_mentions); free(self->allowed_mentions); };
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
}
void discord_create_followup_message_cleanup(struct discord_create_followup_message *self) {
    (void)self->wait;
   
    if (self->avatar_url) free(self->avatar_url);
    (void)self->tts;
 
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
 
    if (self->allowed_mentions) { discord_allowed_mention_cleanup(self->allowed_mentions); free(self->allowed_mentions); };
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
 
   
 
}
void discord_edit_followup_message_cleanup(struct discord_edit_followup_message *self) {
   
    if (self->content) free(self->content);
 
    if (self->embeds) { discord_embeds_cleanup(self->embeds); free(self->embeds); };
 
 
    if (self->allowed_mentions) { discord_allowed_mention_cleanup(self->allowed_mentions); free(self->allowed_mentions); };
 
 
    if (self->components) { discord_components_cleanup(self->components); free(self->components); };
 
 
    if (self->attachments) { discord_attachments_cleanup(self->attachments); free(self->attachments); };
 
}
long strings_from_jsmnf(jsmnf_pair *root, const char *js, struct strings *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, char *, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; char *o; if (f && f->type == JSMN_STRING) { long _ret; o = calloc(1, f->v.len + 1); if (NULL == o) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(o, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; }; carray_insert(self, i, o); }
return ret; }
long json_values_from_jsmnf(jsmnf_pair *root, const char *js, struct json_values *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, json_char *, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; json_char *o; if (f) { o = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; }; carray_insert(self, i, o); }
return ret; }
long snowflakes_from_jsmnf(jsmnf_pair *root, const char *js, struct snowflakes *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, u64snowflake, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; u64snowflake o; if (f) sscanf(js + f->v.pos, "%" SCNu64, &o); carray_insert(self, i, o); }
return ret; }
long bitmasks_from_jsmnf(jsmnf_pair *root, const char *js, struct bitmasks *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, u64bitmask, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; u64bitmask o; if (f) sscanf(js + f->v.pos, "%" SCNu64, &o); carray_insert(self, i, o); }
return ret; }
long integers_from_jsmnf(jsmnf_pair *root, const char *js, struct integers *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, int, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; int o; if (f && f->type == JSMN_PRIMITIVE) o = (int)strtol(js + f->v.pos, NULL, 10); carray_insert(self, i, o); }
return ret; }








long discord_application_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "rpc_origins", sizeof("rpc_origins") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->rpc_origins = calloc(1, sizeof *self->rpc_origins); if (NULL == self->rpc_origins) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->rpc_origins); if (_ret < 0) return _ret; ret += sizeof *self->rpc_origins + _ret; };
 
    f = jsmnf_find(root, js, "bot_public", sizeof("bot_public") - 1); if (f && f->type == JSMN_PRIMITIVE) self->bot_public = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "bot_require_code_grant", sizeof("bot_require_code_grant") - 1); if (f && f->type == JSMN_PRIMITIVE) self->bot_require_code_grant = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "terms_of_service_url", sizeof("terms_of_service_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->terms_of_service_url = calloc(1, f->v.len + 1); if (NULL == self->terms_of_service_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->terms_of_service_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "privacy_policy_url", sizeof("privacy_policy_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->privacy_policy_url = calloc(1, f->v.len + 1); if (NULL == self->privacy_policy_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->privacy_policy_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "owner", sizeof("owner") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->owner = calloc(1, sizeof *self->owner); if (NULL == self->owner) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->owner); if (_ret < 0) return _ret; ret += sizeof *self->owner + _ret; };
 
    f = jsmnf_find(root, js, "summary", sizeof("summary") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->summary = calloc(1, f->v.len + 1); if (NULL == self->summary) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->summary, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "verify_key", sizeof("verify_key") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->verify_key = calloc(1, f->v.len + 1); if (NULL == self->verify_key) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->verify_key, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "team", sizeof("team") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->team = calloc(1, sizeof *self->team); if (NULL == self->team) return JSMN_ERROR_NOMEM; _ret = discord_team_from_jsmnf(f, js, self->team); if (_ret < 0) return _ret; ret += sizeof *self->team + _ret; };
 
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "primary_sku_id", sizeof("primary_sku_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->primary_sku_id);
    f = jsmnf_find(root, js, "slug", sizeof("slug") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->slug = calloc(1, f->v.len + 1); if (NULL == self->slug) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->slug, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "cover_image", sizeof("cover_image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->cover_image = calloc(1, f->v.len + 1); if (NULL == self->cover_image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->cover_image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
return ret; }
long discord_install_params_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_install_params *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "scopes", sizeof("scopes") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->scopes = calloc(1, sizeof *self->scopes); if (NULL == self->scopes) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->scopes); if (_ret < 0) return _ret; ret += sizeof *self->scopes + _ret; };
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->permissions);
return ret; }
long discord_audit_log_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "audit_log_entries", sizeof("audit_log_entries") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->audit_log_entries = calloc(1, sizeof *self->audit_log_entries); if (NULL == self->audit_log_entries) return JSMN_ERROR_NOMEM; _ret = discord_audit_log_entries_from_jsmnf(f, js, self->audit_log_entries); if (_ret < 0) return _ret; ret += sizeof *self->audit_log_entries + _ret; };
 
 
    f = jsmnf_find(root, js, "guild_scheduled_events", sizeof("guild_scheduled_events") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->guild_scheduled_events = calloc(1, sizeof *self->guild_scheduled_events); if (NULL == self->guild_scheduled_events) return JSMN_ERROR_NOMEM; _ret = discord_guild_scheduled_events_from_jsmnf(f, js, self->guild_scheduled_events); if (_ret < 0) return _ret; ret += sizeof *self->guild_scheduled_events + _ret; };
 
 
    f = jsmnf_find(root, js, "integrations", sizeof("integrations") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->integrations = calloc(1, sizeof *self->integrations); if (NULL == self->integrations) return JSMN_ERROR_NOMEM; _ret = discord_integrations_from_jsmnf(f, js, self->integrations); if (_ret < 0) return _ret; ret += sizeof *self->integrations + _ret; };
 
 
    f = jsmnf_find(root, js, "threads", sizeof("threads") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->threads = calloc(1, sizeof *self->threads); if (NULL == self->threads) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->threads); if (_ret < 0) return _ret; ret += sizeof *self->threads + _ret; };
 
 
    f = jsmnf_find(root, js, "users", sizeof("users") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->users = calloc(1, sizeof *self->users); if (NULL == self->users) return JSMN_ERROR_NOMEM; _ret = discord_users_from_jsmnf(f, js, self->users); if (_ret < 0) return _ret; ret += sizeof *self->users + _ret; };
 
 
    f = jsmnf_find(root, js, "webhooks", sizeof("webhooks") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->webhooks = calloc(1, sizeof *self->webhooks); if (NULL == self->webhooks) return JSMN_ERROR_NOMEM; _ret = discord_webhooks_from_jsmnf(f, js, self->webhooks); if (_ret < 0) return _ret; ret += sizeof *self->webhooks + _ret; };
 
return ret; }
static long discord_audit_log_entry_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_entry *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "target_id", sizeof("target_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->target_id);
 
    f = jsmnf_find(root, js, "changes", sizeof("changes") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->changes = calloc(1, sizeof *self->changes); if (NULL == self->changes) return JSMN_ERROR_NOMEM; _ret = discord_audit_log_changes_from_jsmnf(f, js, self->changes); if (_ret < 0) return _ret; ret += sizeof *self->changes + _ret; };
 
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "action_type", sizeof("action_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->action_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_optional_audit_entry_infos_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
    f = jsmnf_find(root, js, "reason", sizeof("reason") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->reason = calloc(1, f->v.len + 1); if (NULL == self->reason) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->reason, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_audit_log_entries_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_entries *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_audit_log_entry, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_audit_log_entry o = { 0 }; long _ret = discord_audit_log_entry_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_optional_audit_entry_info_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_optional_audit_entry_info *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "count", sizeof("count") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->count = calloc(1, f->v.len + 1); if (NULL == self->count) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->count, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "delete_member_days", sizeof("delete_member_days") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->delete_member_days = calloc(1, f->v.len + 1); if (NULL == self->delete_member_days) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->delete_member_days, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "members_removed", sizeof("members_removed") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->members_removed = calloc(1, f->v.len + 1); if (NULL == self->members_removed) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->members_removed, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "message_id", sizeof("message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->message_id);
    f = jsmnf_find(root, js, "role_name", sizeof("role_name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->role_name = calloc(1, f->v.len + 1); if (NULL == self->role_name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->role_name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->type = calloc(1, f->v.len + 1); if (NULL == self->type) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->type, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_optional_audit_entry_infos_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_optional_audit_entry_infos *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_optional_audit_entry_info, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_optional_audit_entry_info o = { 0 }; long _ret = discord_optional_audit_entry_info_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_audit_log_change_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_change *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "new_value", sizeof("new_value") - 1); if (f) { self->new_value = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "old_value", sizeof("old_value") - 1); if (f) { self->old_value = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "key", sizeof("key") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->key = calloc(1, f->v.len + 1); if (NULL == self->key) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->key, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_audit_log_changes_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_audit_log_changes *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_audit_log_change, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_audit_log_change o = { 0 }; long _ret = discord_audit_log_change_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_auto_moderation_trigger_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_trigger_metadata *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "keyword_filter", sizeof("keyword_filter") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->keyword_filter = calloc(1, sizeof *self->keyword_filter); if (NULL == self->keyword_filter) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->keyword_filter); if (_ret < 0) return _ret; ret += sizeof *self->keyword_filter + _ret; };
    f = jsmnf_find(root, js, "presets", sizeof("presets") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->presets = calloc(1, sizeof *self->presets); if (NULL == self->presets) return JSMN_ERROR_NOMEM; _ret = integers_from_jsmnf(f, js, self->presets); if (_ret < 0) return _ret; ret += sizeof *self->presets + _ret; };
return ret; }
static long discord_auto_moderation_action_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_action *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "metadata", sizeof("metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->metadata = calloc(1, sizeof *self->metadata); if (NULL == self->metadata) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_action_metadata_from_jsmnf(f, js, self->metadata); if (_ret < 0) return _ret; ret += sizeof *self->metadata + _ret; };
 
return ret; }
static long discord_auto_moderation_actions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_actions *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_auto_moderation_action, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_auto_moderation_action o = { 0 }; long _ret = discord_auto_moderation_action_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_auto_moderation_action_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_action_metadata *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
 
 
    f = jsmnf_find(root, js, "duration_seconds", sizeof("duration_seconds") - 1); if (f && f->type == JSMN_PRIMITIVE) self->duration_seconds = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_auto_moderation_rule_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_rule *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "creator_id", sizeof("creator_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->creator_id);
 
    f = jsmnf_find(root, js, "event_type", sizeof("event_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->event_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "trigger_type", sizeof("trigger_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->trigger_type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "actions", sizeof("actions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->actions = calloc(1, sizeof *self->actions); if (NULL == self->actions) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_actions_from_jsmnf(f, js, self->actions); if (_ret < 0) return _ret; ret += sizeof *self->actions + _ret; };
    f = jsmnf_find(root, js, "trigger_metadata", sizeof("trigger_metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->trigger_metadata = calloc(1, sizeof *self->trigger_metadata); if (NULL == self->trigger_metadata) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_trigger_metadata_from_jsmnf(f, js, self->trigger_metadata); if (_ret < 0) return _ret; ret += sizeof *self->trigger_metadata + _ret; };
    f = jsmnf_find(root, js, "enabled", sizeof("enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->enabled = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "exempt_roles", sizeof("exempt_roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->exempt_roles = calloc(1, sizeof *self->exempt_roles); if (NULL == self->exempt_roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->exempt_roles); if (_ret < 0) return _ret; ret += sizeof *self->exempt_roles + _ret; };
    f = jsmnf_find(root, js, "exempt_channels", sizeof("exempt_channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->exempt_channels = calloc(1, sizeof *self->exempt_channels); if (NULL == self->exempt_channels) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->exempt_channels); if (_ret < 0) return _ret; ret += sizeof *self->exempt_channels + _ret; };
return ret; }
long discord_auto_moderation_rules_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_rules *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_auto_moderation_rule, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_auto_moderation_rule o = { 0 }; long _ret = discord_auto_moderation_rule_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_create_auto_moderation_rule_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_auto_moderation_rule *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "event_type", sizeof("event_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->event_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "trigger_type", sizeof("trigger_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->trigger_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "actions", sizeof("actions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->actions = calloc(1, sizeof *self->actions); if (NULL == self->actions) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_actions_from_jsmnf(f, js, self->actions); if (_ret < 0) return _ret; ret += sizeof *self->actions + _ret; };
 
 
    f = jsmnf_find(root, js, "trigger_metadata", sizeof("trigger_metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->trigger_metadata = calloc(1, sizeof *self->trigger_metadata); if (NULL == self->trigger_metadata) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_trigger_metadata_from_jsmnf(f, js, self->trigger_metadata); if (_ret < 0) return _ret; ret += sizeof *self->trigger_metadata + _ret; };
 
    f = jsmnf_find(root, js, "enabled", sizeof("enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->enabled = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "exempt_roles", sizeof("exempt_roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->exempt_roles = calloc(1, sizeof *self->exempt_roles); if (NULL == self->exempt_roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->exempt_roles); if (_ret < 0) return _ret; ret += sizeof *self->exempt_roles + _ret; };
 
 
    f = jsmnf_find(root, js, "exempt_channels", sizeof("exempt_channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->exempt_channels = calloc(1, sizeof *self->exempt_channels); if (NULL == self->exempt_channels) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->exempt_channels); if (_ret < 0) return _ret; ret += sizeof *self->exempt_channels + _ret; };
 
return ret; }
long discord_modify_auto_moderation_rule_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_auto_moderation_rule *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "event_type", sizeof("event_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->event_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "trigger_metadata", sizeof("trigger_metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->trigger_metadata = calloc(1, sizeof *self->trigger_metadata); if (NULL == self->trigger_metadata) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_trigger_metadata_from_jsmnf(f, js, self->trigger_metadata); if (_ret < 0) return _ret; ret += sizeof *self->trigger_metadata + _ret; };
 
 
    f = jsmnf_find(root, js, "actions", sizeof("actions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->actions = calloc(1, sizeof *self->actions); if (NULL == self->actions) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_actions_from_jsmnf(f, js, self->actions); if (_ret < 0) return _ret; ret += sizeof *self->actions + _ret; };
 
    f = jsmnf_find(root, js, "enabled", sizeof("enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->enabled = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "exempt_roles", sizeof("exempt_roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->exempt_roles = calloc(1, sizeof *self->exempt_roles); if (NULL == self->exempt_roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->exempt_roles); if (_ret < 0) return _ret; ret += sizeof *self->exempt_roles + _ret; };
 
 
    f = jsmnf_find(root, js, "exempt_channels", sizeof("exempt_channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->exempt_channels = calloc(1, sizeof *self->exempt_channels); if (NULL == self->exempt_channels) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->exempt_channels); if (_ret < 0) return _ret; ret += sizeof *self->exempt_channels + _ret; };
 
return ret; }
long discord_invite_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invite *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "code", sizeof("code") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->code = calloc(1, f->v.len + 1); if (NULL == self->code) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->code, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "guild", sizeof("guild") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->guild = calloc(1, sizeof *self->guild); if (NULL == self->guild) return JSMN_ERROR_NOMEM; _ret = discord_guild_from_jsmnf(f, js, self->guild); if (_ret < 0) return _ret; ret += sizeof *self->guild + _ret; };
 
    f = jsmnf_find(root, js, "channel", sizeof("channel") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->channel = calloc(1, sizeof *self->channel); if (NULL == self->channel) return JSMN_ERROR_NOMEM; _ret = discord_channel_from_jsmnf(f, js, self->channel); if (_ret < 0) return _ret; ret += sizeof *self->channel + _ret; };
 
    f = jsmnf_find(root, js, "inviter", sizeof("inviter") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->inviter = calloc(1, sizeof *self->inviter); if (NULL == self->inviter) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->inviter); if (_ret < 0) return _ret; ret += sizeof *self->inviter + _ret; };
 
 
    f = jsmnf_find(root, js, "target_type", sizeof("target_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->target_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "target_user", sizeof("target_user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->target_user = calloc(1, sizeof *self->target_user); if (NULL == self->target_user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->target_user); if (_ret < 0) return _ret; ret += sizeof *self->target_user + _ret; };
 
 
    f = jsmnf_find(root, js, "target_application", sizeof("target_application") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->target_application = calloc(1, sizeof *self->target_application); if (NULL == self->target_application) return JSMN_ERROR_NOMEM; _ret = discord_application_from_jsmnf(f, js, self->target_application); if (_ret < 0) return _ret; ret += sizeof *self->target_application + _ret; };
 
    f = jsmnf_find(root, js, "approximate_presence_count", sizeof("approximate_presence_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->approximate_presence_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "approximate_member_count", sizeof("approximate_member_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->approximate_member_count = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "expires_at", sizeof("expires_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->expires_at);
 
 
    f = jsmnf_find(root, js, "stage_instance", sizeof("stage_instance") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->stage_instance = calloc(1, sizeof *self->stage_instance); if (NULL == self->stage_instance) return JSMN_ERROR_NOMEM; _ret = discord_invite_stage_instance_from_jsmnf(f, js, self->stage_instance); if (_ret < 0) return _ret; ret += sizeof *self->stage_instance + _ret; };
 
 
    f = jsmnf_find(root, js, "guild_scheduled_event", sizeof("guild_scheduled_event") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->guild_scheduled_event = calloc(1, sizeof *self->guild_scheduled_event); if (NULL == self->guild_scheduled_event) return JSMN_ERROR_NOMEM; _ret = discord_guild_scheduled_event_from_jsmnf(f, js, self->guild_scheduled_event); if (_ret < 0) return _ret; ret += sizeof *self->guild_scheduled_event + _ret; };
 
return ret; }
long discord_invites_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invites *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_invite, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_invite o = { 0 }; long _ret = discord_invite_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_invite_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invite_metadata *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "uses", sizeof("uses") - 1); if (f && f->type == JSMN_PRIMITIVE) self->uses = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "max_uses", sizeof("max_uses") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_uses = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "max_age", sizeof("max_age") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_age = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "temporary", sizeof("temporary") - 1); if (f && f->type == JSMN_PRIMITIVE) self->temporary = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "created_at", sizeof("created_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->created_at);
 
return ret; }
static long discord_invite_stage_instance_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invite_stage_instance *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_guild_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
 
    f = jsmnf_find(root, js, "participant_count", sizeof("participant_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->participant_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "speaker_count", sizeof("speaker_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->speaker_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "topic", sizeof("topic") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->topic = calloc(1, f->v.len + 1); if (NULL == self->topic) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->topic, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_get_invite_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_get_invite *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "with_counts", sizeof("with_counts") - 1); if (f && f->type == JSMN_PRIMITIVE) self->with_counts = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "with_expiration", sizeof("with_expiration") - 1); if (f && f->type == JSMN_PRIMITIVE) self->with_expiration = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "guild_scheduled_event_id", sizeof("guild_scheduled_event_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_scheduled_event_id);
 
return ret; }









long discord_channel_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_channel *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
 
    f = jsmnf_find(root, js, "position", sizeof("position") - 1); if (f && f->type == JSMN_PRIMITIVE) self->position = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "permission_overwrites", sizeof("permission_overwrites") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->permission_overwrites = calloc(1, sizeof *self->permission_overwrites); if (NULL == self->permission_overwrites) return JSMN_ERROR_NOMEM; _ret = discord_overwrites_from_jsmnf(f, js, self->permission_overwrites); if (_ret < 0) return _ret; ret += sizeof *self->permission_overwrites + _ret; };
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "topic", sizeof("topic") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->topic = calloc(1, f->v.len + 1); if (NULL == self->topic) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->topic, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "nsfw", sizeof("nsfw") - 1); if (f && f->type == JSMN_PRIMITIVE) self->nsfw = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "last_message_id", sizeof("last_message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->last_message_id);
    f = jsmnf_find(root, js, "bitrate", sizeof("bitrate") - 1); if (f && f->type == JSMN_PRIMITIVE) self->bitrate = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "user_limit", sizeof("user_limit") - 1); if (f && f->type == JSMN_PRIMITIVE) self->user_limit = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1); if (f && f->type == JSMN_PRIMITIVE) self->rate_limit_per_user = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "recipients", sizeof("recipients") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->recipients = calloc(1, sizeof *self->recipients); if (NULL == self->recipients) return JSMN_ERROR_NOMEM; _ret = discord_users_from_jsmnf(f, js, self->recipients); if (_ret < 0) return _ret; ret += sizeof *self->recipients + _ret; };
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "owner_id", sizeof("owner_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->owner_id);
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
    f = jsmnf_find(root, js, "parent_id", sizeof("parent_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->parent_id);
    f = jsmnf_find(root, js, "last_pin_timestamp", sizeof("last_pin_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->last_pin_timestamp);
    f = jsmnf_find(root, js, "rtc_region", sizeof("rtc_region") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->rtc_region = calloc(1, f->v.len + 1); if (NULL == self->rtc_region) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->rtc_region, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "voice_quality_mode", sizeof("voice_quality_mode") - 1); if (f && f->type == JSMN_PRIMITIVE) self->voice_quality_mode = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "message_count", sizeof("message_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->message_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "member_count", sizeof("member_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->member_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "thread_metadata", sizeof("thread_metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->thread_metadata = calloc(1, sizeof *self->thread_metadata); if (NULL == self->thread_metadata) return JSMN_ERROR_NOMEM; _ret = discord_thread_metadata_from_jsmnf(f, js, self->thread_metadata); if (_ret < 0) return _ret; ret += sizeof *self->thread_metadata + _ret; };
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_thread_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
    f = jsmnf_find(root, js, "default_auto_archive_duration", sizeof("default_auto_archive_duration") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_auto_archive_duration = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->permissions);
return ret; }
long discord_channels_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_channels *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_channel, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_channel o = { 0 }; long _ret = discord_channel_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "author", sizeof("author") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->author = calloc(1, sizeof *self->author); if (NULL == self->author) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->author); if (_ret < 0) return _ret; ret += sizeof *self->author + _ret; };
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_guild_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "timestamp", sizeof("timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->timestamp);
 
    f = jsmnf_find(root, js, "edited_timestamp", sizeof("edited_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->edited_timestamp);
 
    f = jsmnf_find(root, js, "tts", sizeof("tts") - 1); if (f && f->type == JSMN_PRIMITIVE) self->tts = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "mention_everyone", sizeof("mention_everyone") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mention_everyone = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "mentions", sizeof("mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->mentions = calloc(1, sizeof *self->mentions); if (NULL == self->mentions) return JSMN_ERROR_NOMEM; _ret = discord_users_from_jsmnf(f, js, self->mentions); if (_ret < 0) return _ret; ret += sizeof *self->mentions + _ret; };
    f = jsmnf_find(root, js, "mention_roles", sizeof("mention_roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->mention_roles = calloc(1, sizeof *self->mention_roles); if (NULL == self->mention_roles) return JSMN_ERROR_NOMEM; _ret = discord_roles_from_jsmnf(f, js, self->mention_roles); if (_ret < 0) return _ret; ret += sizeof *self->mention_roles + _ret; };
    f = jsmnf_find(root, js, "mention_channels", sizeof("mention_channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->mention_channels = calloc(1, sizeof *self->mention_channels); if (NULL == self->mention_channels) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->mention_channels); if (_ret < 0) return _ret; ret += sizeof *self->mention_channels + _ret; };
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
    f = jsmnf_find(root, js, "reactions", sizeof("reactions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->reactions = calloc(1, sizeof *self->reactions); if (NULL == self->reactions) return JSMN_ERROR_NOMEM; _ret = discord_reactions_from_jsmnf(f, js, self->reactions); if (_ret < 0) return _ret; ret += sizeof *self->reactions + _ret; };
    f = jsmnf_find(root, js, "nonce", sizeof("nonce") - 1); if (f) { self->nonce = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "pinned", sizeof("pinned") - 1); if (f && f->type == JSMN_PRIMITIVE) self->pinned = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "webhook_id", sizeof("webhook_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->webhook_id);
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "activity", sizeof("activity") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->activity = calloc(1, sizeof *self->activity); if (NULL == self->activity) return JSMN_ERROR_NOMEM; _ret = discord_message_activity_from_jsmnf(f, js, self->activity); if (_ret < 0) return _ret; ret += sizeof *self->activity + _ret; };
    f = jsmnf_find(root, js, "application", sizeof("application") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->application = calloc(1, sizeof *self->application); if (NULL == self->application) return JSMN_ERROR_NOMEM; _ret = discord_application_from_jsmnf(f, js, self->application); if (_ret < 0) return _ret; ret += sizeof *self->application + _ret; };
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
    f = jsmnf_find(root, js, "message_reference", sizeof("message_reference") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->message_reference = calloc(1, sizeof *self->message_reference); if (NULL == self->message_reference) return JSMN_ERROR_NOMEM; _ret = discord_message_reference_from_jsmnf(f, js, self->message_reference); if (_ret < 0) return _ret; ret += sizeof *self->message_reference + _ret; };
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
    f = jsmnf_find(root, js, "referenced_message", sizeof("referenced_message") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->referenced_message = calloc(1, sizeof *self->referenced_message); if (NULL == self->referenced_message) return JSMN_ERROR_NOMEM; _ret = discord_message_from_jsmnf(f, js, self->referenced_message); if (_ret < 0) return _ret; ret += sizeof *self->referenced_message + _ret; };
    f = jsmnf_find(root, js, "interaction", sizeof("interaction") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->interaction = calloc(1, sizeof *self->interaction); if (NULL == self->interaction) return JSMN_ERROR_NOMEM; _ret = discord_message_interaction_from_jsmnf(f, js, self->interaction); if (_ret < 0) return _ret; ret += sizeof *self->interaction + _ret; };
    f = jsmnf_find(root, js, "thread", sizeof("thread") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->thread = calloc(1, sizeof *self->thread); if (NULL == self->thread) return JSMN_ERROR_NOMEM; _ret = discord_channel_from_jsmnf(f, js, self->thread); if (_ret < 0) return _ret; ret += sizeof *self->thread + _ret; };
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
    f = jsmnf_find(root, js, "sticker_items", sizeof("sticker_items") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->sticker_items = calloc(1, sizeof *self->sticker_items); if (NULL == self->sticker_items) return JSMN_ERROR_NOMEM; _ret = discord_sticker_items_from_jsmnf(f, js, self->sticker_items); if (_ret < 0) return _ret; ret += sizeof *self->sticker_items + _ret; };
return ret; }
long discord_messages_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_messages *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_message, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_message o = { 0 }; long _ret = discord_message_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_message_activity_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_activity *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "party_id", sizeof("party_id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->party_id = calloc(1, f->v.len + 1); if (NULL == self->party_id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->party_id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_message_reference_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_reference *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "message_id", sizeof("message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->message_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "fail_if_not_exists", sizeof("fail_if_not_exists") - 1); if (f && f->type == JSMN_PRIMITIVE) self->fail_if_not_exists = ('t' == js[f->v.pos]);
return ret; }
long discord_followed_channel_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_followed_channel *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "webhook_id", sizeof("webhook_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->webhook_id);
return ret; }
static long discord_reaction_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_reaction *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "count", sizeof("count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "me", sizeof("me") - 1); if (f && f->type == JSMN_PRIMITIVE) self->me = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "emoji", sizeof("emoji") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emoji = calloc(1, sizeof *self->emoji); if (NULL == self->emoji) return JSMN_ERROR_NOMEM; _ret = discord_emoji_from_jsmnf(f, js, self->emoji); if (_ret < 0) return _ret; ret += sizeof *self->emoji + _ret; };
return ret; }
static long discord_reactions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_reactions *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_reaction, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_reaction o = { 0 }; long _ret = discord_reaction_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_overwrite_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_overwrite *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "allow", sizeof("allow") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->allow);
    f = jsmnf_find(root, js, "deny", sizeof("deny") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->deny);
return ret; }
static long discord_overwrites_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_overwrites *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_overwrite, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_overwrite o = { 0 }; long _ret = discord_overwrite_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_thread_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_thread_metadata *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "archived", sizeof("archived") - 1); if (f && f->type == JSMN_PRIMITIVE) self->archived = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "auto_archive_duration", sizeof("auto_archive_duration") - 1); if (f && f->type == JSMN_PRIMITIVE) self->auto_archive_duration = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "archive_timestamp", sizeof("archive_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->archive_timestamp);
    f = jsmnf_find(root, js, "locked", sizeof("locked") - 1); if (f && f->type == JSMN_PRIMITIVE) self->locked = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "invitable", sizeof("invitable") - 1); if (f && f->type == JSMN_PRIMITIVE) self->invitable = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "create_timestamp", sizeof("create_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->create_timestamp);
return ret; }
long discord_thread_member_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_thread_member *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "join_timestamp", sizeof("join_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->join_timestamp);
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_thread_members_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_thread_members *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_thread_member, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_thread_member o = { 0 }; long _ret = discord_thread_member_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_attachment_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_attachment *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "filename", sizeof("filename") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->filename = calloc(1, f->v.len + 1); if (NULL == self->filename) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->filename, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "content_type", sizeof("content_type") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content_type = calloc(1, f->v.len + 1); if (NULL == self->content_type) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content_type, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "size", sizeof("size") - 1); if (f && f->type == JSMN_PRIMITIVE) self->size = (size_t)strtoull(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "proxy_url", sizeof("proxy_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->proxy_url = calloc(1, f->v.len + 1); if (NULL == self->proxy_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->proxy_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "height", sizeof("height") - 1); if (f && f->type == JSMN_PRIMITIVE) self->height = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "width", sizeof("width") - 1); if (f && f->type == JSMN_PRIMITIVE) self->width = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "ephemeral", sizeof("ephemeral") - 1); if (f && f->type == JSMN_PRIMITIVE) self->ephemeral = ('t' == js[f->v.pos]);
return ret; }
long discord_attachments_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_attachments *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_attachment, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_attachment o = { 0 }; long _ret = discord_attachment_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_embed_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "title", sizeof("title") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->title = calloc(1, f->v.len + 1); if (NULL == self->title) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->title, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->type = calloc(1, f->v.len + 1); if (NULL == self->type) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->type, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "timestamp", sizeof("timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->timestamp);
 
 
    f = jsmnf_find(root, js, "color", sizeof("color") - 1); if (f && f->type == JSMN_PRIMITIVE) self->color = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "footer", sizeof("footer") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->footer = calloc(1, sizeof *self->footer); if (NULL == self->footer) return JSMN_ERROR_NOMEM; _ret = discord_embed_footer_from_jsmnf(f, js, self->footer); if (_ret < 0) return _ret; ret += sizeof *self->footer + _ret; };
 
 
    f = jsmnf_find(root, js, "image", sizeof("image") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->image = calloc(1, sizeof *self->image); if (NULL == self->image) return JSMN_ERROR_NOMEM; _ret = discord_embed_image_from_jsmnf(f, js, self->image); if (_ret < 0) return _ret; ret += sizeof *self->image + _ret; };
 
 
    f = jsmnf_find(root, js, "thumbnail", sizeof("thumbnail") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->thumbnail = calloc(1, sizeof *self->thumbnail); if (NULL == self->thumbnail) return JSMN_ERROR_NOMEM; _ret = discord_embed_thumbnail_from_jsmnf(f, js, self->thumbnail); if (_ret < 0) return _ret; ret += sizeof *self->thumbnail + _ret; };
 
 
    f = jsmnf_find(root, js, "video", sizeof("video") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->video = calloc(1, sizeof *self->video); if (NULL == self->video) return JSMN_ERROR_NOMEM; _ret = discord_embed_video_from_jsmnf(f, js, self->video); if (_ret < 0) return _ret; ret += sizeof *self->video + _ret; };
 
 
    f = jsmnf_find(root, js, "provider", sizeof("provider") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->provider = calloc(1, sizeof *self->provider); if (NULL == self->provider) return JSMN_ERROR_NOMEM; _ret = discord_embed_provider_from_jsmnf(f, js, self->provider); if (_ret < 0) return _ret; ret += sizeof *self->provider + _ret; };
 
 
    f = jsmnf_find(root, js, "author", sizeof("author") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->author = calloc(1, sizeof *self->author); if (NULL == self->author) return JSMN_ERROR_NOMEM; _ret = discord_embed_author_from_jsmnf(f, js, self->author); if (_ret < 0) return _ret; ret += sizeof *self->author + _ret; };
 
 
    f = jsmnf_find(root, js, "fields", sizeof("fields") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->fields = calloc(1, sizeof *self->fields); if (NULL == self->fields) return JSMN_ERROR_NOMEM; _ret = discord_embed_fields_from_jsmnf(f, js, self->fields); if (_ret < 0) return _ret; ret += sizeof *self->fields + _ret; };
 
return ret; }
long discord_embeds_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embeds *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_embed, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_embed o = { 0 }; long _ret = discord_embed_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_embed_thumbnail_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_thumbnail *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "proxy_url", sizeof("proxy_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->proxy_url = calloc(1, f->v.len + 1); if (NULL == self->proxy_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->proxy_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "height", sizeof("height") - 1); if (f && f->type == JSMN_PRIMITIVE) self->height = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "width", sizeof("width") - 1); if (f && f->type == JSMN_PRIMITIVE) self->width = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_embed_video_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_video *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "proxy_url", sizeof("proxy_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->proxy_url = calloc(1, f->v.len + 1); if (NULL == self->proxy_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->proxy_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "height", sizeof("height") - 1); if (f && f->type == JSMN_PRIMITIVE) self->height = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "width", sizeof("width") - 1); if (f && f->type == JSMN_PRIMITIVE) self->width = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_embed_image_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_image *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "proxy_url", sizeof("proxy_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->proxy_url = calloc(1, f->v.len + 1); if (NULL == self->proxy_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->proxy_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "height", sizeof("height") - 1); if (f && f->type == JSMN_PRIMITIVE) self->height = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "width", sizeof("width") - 1); if (f && f->type == JSMN_PRIMITIVE) self->width = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_embed_provider_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_provider *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_embed_author_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_author *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "icon_url", sizeof("icon_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon_url = calloc(1, f->v.len + 1); if (NULL == self->icon_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "proxy_icon_url", sizeof("proxy_icon_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->proxy_icon_url = calloc(1, f->v.len + 1); if (NULL == self->proxy_icon_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->proxy_icon_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_embed_footer_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_footer *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "text", sizeof("text") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->text = calloc(1, f->v.len + 1); if (NULL == self->text) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->text, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "icon_url", sizeof("icon_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon_url = calloc(1, f->v.len + 1); if (NULL == self->icon_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "proxy_icon_url", sizeof("proxy_icon_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->proxy_icon_url = calloc(1, f->v.len + 1); if (NULL == self->proxy_icon_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->proxy_icon_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_embed_field_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_field *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "value", sizeof("value") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->value = calloc(1, f->v.len + 1); if (NULL == self->value) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->value, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "inline", sizeof("inline") - 1); if (f && f->type == JSMN_PRIMITIVE) self->Inline = ('t' == js[f->v.pos]);
return ret; }
long discord_embed_fields_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_embed_fields *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_embed_field, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_embed_field o = { 0 }; long _ret = discord_embed_field_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_channel_mention_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_channel_mention *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_allowed_mention_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_allowed_mention *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "parse", sizeof("parse") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->parse = calloc(1, sizeof *self->parse); if (NULL == self->parse) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->parse); if (_ret < 0) return _ret; ret += sizeof *self->parse + _ret; };
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
    f = jsmnf_find(root, js, "users", sizeof("users") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->users = calloc(1, sizeof *self->users); if (NULL == self->users) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->users); if (_ret < 0) return _ret; ret += sizeof *self->users + _ret; };
    f = jsmnf_find(root, js, "replied_user", sizeof("replied_user") - 1); if (f && f->type == JSMN_PRIMITIVE) self->replied_user = ('t' == js[f->v.pos]);
return ret; }
long discord_thread_response_body_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_thread_response_body *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "threads", sizeof("threads") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->threads = calloc(1, sizeof *self->threads); if (NULL == self->threads) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->threads); if (_ret < 0) return _ret; ret += sizeof *self->threads + _ret; };
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_thread_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
    f = jsmnf_find(root, js, "has_more", sizeof("has_more") - 1); if (f && f->type == JSMN_PRIMITIVE) self->has_more = ('t' == js[f->v.pos]);
return ret; }
long discord_modify_channel_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_channel *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "position", sizeof("position") - 1); if (f && f->type == JSMN_PRIMITIVE) self->position = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "topic", sizeof("topic") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->topic = calloc(1, f->v.len + 1); if (NULL == self->topic) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->topic, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "nsfw", sizeof("nsfw") - 1); if (f && f->type == JSMN_PRIMITIVE) self->nsfw = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1); if (f && f->type == JSMN_PRIMITIVE) self->rate_limit_per_user = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "user_limit", sizeof("user_limit") - 1); if (f && f->type == JSMN_PRIMITIVE) self->user_limit = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "permission_overwrites", sizeof("permission_overwrites") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->permission_overwrites = calloc(1, sizeof *self->permission_overwrites); if (NULL == self->permission_overwrites) return JSMN_ERROR_NOMEM; _ret = discord_overwrites_from_jsmnf(f, js, self->permission_overwrites); if (_ret < 0) return _ret; ret += sizeof *self->permission_overwrites + _ret; };
 
 
    f = jsmnf_find(root, js, "parent_id", sizeof("parent_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->parent_id);
 
    f = jsmnf_find(root, js, "rtc_region", sizeof("rtc_region") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->rtc_region = calloc(1, f->v.len + 1); if (NULL == self->rtc_region) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->rtc_region, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "video_quality_mode", sizeof("video_quality_mode") - 1); if (f && f->type == JSMN_PRIMITIVE) self->video_quality_mode = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "default_auto_archive_duration", sizeof("default_auto_archive_duration") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_auto_archive_duration = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "archived", sizeof("archived") - 1); if (f && f->type == JSMN_PRIMITIVE) self->archived = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "auto_archive_duration", sizeof("auto_archive_duration") - 1); if (f && f->type == JSMN_PRIMITIVE) self->auto_archive_duration = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "locked", sizeof("locked") - 1); if (f && f->type == JSMN_PRIMITIVE) self->locked = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "invitable", sizeof("invitable") - 1); if (f && f->type == JSMN_PRIMITIVE) self->invitable = ('t' == js[f->v.pos]);
return ret; }
long discord_create_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "tts", sizeof("tts") - 1); if (f && f->type == JSMN_PRIMITIVE) self->tts = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
    f = jsmnf_find(root, js, "allowed_mentions", sizeof("allowed_mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->allowed_mentions = calloc(1, sizeof *self->allowed_mentions); if (NULL == self->allowed_mentions) return JSMN_ERROR_NOMEM; _ret = discord_allowed_mention_from_jsmnf(f, js, self->allowed_mentions); if (_ret < 0) return _ret; ret += sizeof *self->allowed_mentions + _ret; };
 
 
    f = jsmnf_find(root, js, "message_reference", sizeof("message_reference") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->message_reference = calloc(1, sizeof *self->message_reference); if (NULL == self->message_reference) return JSMN_ERROR_NOMEM; _ret = discord_message_reference_from_jsmnf(f, js, self->message_reference); if (_ret < 0) return _ret; ret += sizeof *self->message_reference + _ret; };
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "sticker_ids", sizeof("sticker_ids") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->sticker_ids = calloc(1, sizeof *self->sticker_ids); if (NULL == self->sticker_ids) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->sticker_ids); if (_ret < 0) return _ret; ret += sizeof *self->sticker_ids + _ret; };
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
 
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
 
return ret; }
long discord_edit_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_edit_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
 
 
    f = jsmnf_find(root, js, "allowed_mentions", sizeof("allowed_mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->allowed_mentions = calloc(1, sizeof *self->allowed_mentions); if (NULL == self->allowed_mentions) return JSMN_ERROR_NOMEM; _ret = discord_allowed_mention_from_jsmnf(f, js, self->allowed_mentions); if (_ret < 0) return _ret; ret += sizeof *self->allowed_mentions + _ret; };
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
return ret; }
long discord_bulk_delete_messages_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_bulk_delete_messages *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "messages", sizeof("messages") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->messages = calloc(1, sizeof *self->messages); if (NULL == self->messages) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->messages); if (_ret < 0) return _ret; ret += sizeof *self->messages + _ret; };
return ret; }
long discord_edit_channel_permissions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_edit_channel_permissions *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "allow", sizeof("allow") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->allow);
 
 
    f = jsmnf_find(root, js, "deny", sizeof("deny") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->deny);
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
return ret; }
long discord_create_channel_invite_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_channel_invite *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "max_age", sizeof("max_age") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_age = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "max_uses", sizeof("max_uses") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_uses = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "temporary", sizeof("temporary") - 1); if (f && f->type == JSMN_PRIMITIVE) self->temporary = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "unique", sizeof("unique") - 1); if (f && f->type == JSMN_PRIMITIVE) self->unique = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "target_type", sizeof("target_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->target_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "target_user_id", sizeof("target_user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->target_user_id);
 
 
    f = jsmnf_find(root, js, "target_application_id", sizeof("target_application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->target_application_id);
 
return ret; }
long discord_follow_news_channel_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_follow_news_channel *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "webhook_channel_id", sizeof("webhook_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->webhook_channel_id);
 
return ret; }
long discord_group_dm_add_recipient_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_group_dm_add_recipient *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "access_token", sizeof("access_token") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->access_token = calloc(1, f->v.len + 1); if (NULL == self->access_token) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->access_token, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "nick", sizeof("nick") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nick = calloc(1, f->v.len + 1); if (NULL == self->nick) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nick, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_start_thread_with_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_start_thread_with_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "auto_archive_duration", sizeof("auto_archive_duration") - 1); if (f && f->type == JSMN_PRIMITIVE) self->auto_archive_duration = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1); if (f && f->type == JSMN_PRIMITIVE) self->rate_limit_per_user = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_start_thread_without_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_start_thread_without_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "auto_archive_duration", sizeof("auto_archive_duration") - 1); if (f && f->type == JSMN_PRIMITIVE) self->auto_archive_duration = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "invitable", sizeof("invitable") - 1); if (f && f->type == JSMN_PRIMITIVE) self->invitable = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1); if (f && f->type == JSMN_PRIMITIVE) self->rate_limit_per_user = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_list_active_threads_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_list_active_threads *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "threads", sizeof("threads") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->threads = calloc(1, sizeof *self->threads); if (NULL == self->threads) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->threads); if (_ret < 0) return _ret; ret += sizeof *self->threads + _ret; };
 
 
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_thread_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
 
    f = jsmnf_find(root, js, "has_more", sizeof("has_more") - 1); if (f && f->type == JSMN_PRIMITIVE) self->has_more = ('t' == js[f->v.pos]);
return ret; }
long discord_emoji_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_emoji *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = discord_roles_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
 
 
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
 
    f = jsmnf_find(root, js, "require_colons", sizeof("require_colons") - 1); if (f && f->type == JSMN_PRIMITIVE) self->require_colons = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "managed", sizeof("managed") - 1); if (f && f->type == JSMN_PRIMITIVE) self->managed = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "animated", sizeof("animated") - 1); if (f && f->type == JSMN_PRIMITIVE) self->animated = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "available", sizeof("available") - 1); if (f && f->type == JSMN_PRIMITIVE) self->available = ('t' == js[f->v.pos]);
return ret; }
long discord_emojis_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_emojis *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_emoji, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_emoji o = { 0 }; long _ret = discord_emoji_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_create_guild_emoji_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_emoji *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "image", sizeof("image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->image = calloc(1, f->v.len + 1); if (NULL == self->image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
 
return ret; }
long discord_modify_guild_emoji_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_emoji *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "image", sizeof("image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->image = calloc(1, f->v.len + 1); if (NULL == self->image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
 
return ret; }




long discord_guild_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "icon_hash", sizeof("icon_hash") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon_hash = calloc(1, f->v.len + 1); if (NULL == self->icon_hash) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon_hash, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "splash", sizeof("splash") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->splash = calloc(1, f->v.len + 1); if (NULL == self->splash) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->splash, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "discovery_splash", sizeof("discovery_splash") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->discovery_splash = calloc(1, f->v.len + 1); if (NULL == self->discovery_splash) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->discovery_splash, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "owner", sizeof("owner") - 1); if (f && f->type == JSMN_PRIMITIVE) self->owner = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "owner_id", sizeof("owner_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->owner_id);
 
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->permissions);
 
    f = jsmnf_find(root, js, "afk_channel_id", sizeof("afk_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->afk_channel_id);
    f = jsmnf_find(root, js, "afk_timeout", sizeof("afk_timeout") - 1); if (f && f->type == JSMN_PRIMITIVE) self->afk_timeout = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "widget_enabled", sizeof("widget_enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->widget_enabled = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "widget_channel_id", sizeof("widget_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->widget_channel_id);
    f = jsmnf_find(root, js, "verification_level", sizeof("verification_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->verification_level = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "default_message_notifications", sizeof("default_message_notifications") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_message_notifications = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "explicit_content_filter", sizeof("explicit_content_filter") - 1); if (f && f->type == JSMN_PRIMITIVE) self->explicit_content_filter = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = discord_roles_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
    f = jsmnf_find(root, js, "emojis", sizeof("emojis") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emojis = calloc(1, sizeof *self->emojis); if (NULL == self->emojis) return JSMN_ERROR_NOMEM; _ret = discord_emojis_from_jsmnf(f, js, self->emojis); if (_ret < 0) return _ret; ret += sizeof *self->emojis + _ret; };
    f = jsmnf_find(root, js, "features", sizeof("features") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->features = calloc(1, sizeof *self->features); if (NULL == self->features) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->features); if (_ret < 0) return _ret; ret += sizeof *self->features + _ret; };
    f = jsmnf_find(root, js, "mfa_level", sizeof("mfa_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mfa_level = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
    f = jsmnf_find(root, js, "system_channel_id", sizeof("system_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->system_channel_id);
    f = jsmnf_find(root, js, "system_channel_flags", sizeof("system_channel_flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->system_channel_flags);
    f = jsmnf_find(root, js, "rules_channel_id", sizeof("rules_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->rules_channel_id);
 
    f = jsmnf_find(root, js, "joined_at", sizeof("joined_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->joined_at);
 
    f = jsmnf_find(root, js, "large", sizeof("large") - 1); if (f && f->type == JSMN_PRIMITIVE) self->large = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "unavailable", sizeof("unavailable") - 1); if (f && f->type == JSMN_PRIMITIVE) self->unavailable = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "member_count", sizeof("member_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->member_count = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "voice_states", sizeof("voice_states") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->voice_states = calloc(1, sizeof *self->voice_states); if (NULL == self->voice_states) return JSMN_ERROR_NOMEM; _ret = discord_voice_states_from_jsmnf(f, js, self->voice_states); if (_ret < 0) return _ret; ret += sizeof *self->voice_states + _ret; };
 
 
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_guild_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
 
 
    f = jsmnf_find(root, js, "channels", sizeof("channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->channels = calloc(1, sizeof *self->channels); if (NULL == self->channels) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->channels); if (_ret < 0) return _ret; ret += sizeof *self->channels + _ret; };
 
 
    f = jsmnf_find(root, js, "threads", sizeof("threads") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->threads = calloc(1, sizeof *self->threads); if (NULL == self->threads) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->threads); if (_ret < 0) return _ret; ret += sizeof *self->threads + _ret; };
 
 
    f = jsmnf_find(root, js, "presences", sizeof("presences") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->presences = calloc(1, sizeof *self->presences); if (NULL == self->presences) return JSMN_ERROR_NOMEM; _ret = discord_presence_updates_from_jsmnf(f, js, self->presences); if (_ret < 0) return _ret; ret += sizeof *self->presences + _ret; };
 
 
    f = jsmnf_find(root, js, "max_presences", sizeof("max_presences") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_presences = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "max_members", sizeof("max_members") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_members = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "vanity_url_code", sizeof("vanity_url_code") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->vanity_url_code = calloc(1, f->v.len + 1); if (NULL == self->vanity_url_code) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->vanity_url_code, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "banner", sizeof("banner") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->banner = calloc(1, f->v.len + 1); if (NULL == self->banner) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->banner, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "premium_tier", sizeof("premium_tier") - 1); if (f && f->type == JSMN_PRIMITIVE) self->premium_tier = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "premium_subscription_count", sizeof("premium_subscription_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->premium_subscription_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "preferred_locale", sizeof("preferred_locale") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->preferred_locale = calloc(1, f->v.len + 1); if (NULL == self->preferred_locale) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->preferred_locale, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "public_updates_channel_id", sizeof("public_updates_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->public_updates_channel_id);
 
    f = jsmnf_find(root, js, "max_video_channel_users", sizeof("max_video_channel_users") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_video_channel_users = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "approximate_member_count", sizeof("approximate_member_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->approximate_member_count = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "approximate_presence_count", sizeof("approximate_presence_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->approximate_presence_count = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "welcome_screen", sizeof("welcome_screen") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->welcome_screen = calloc(1, sizeof *self->welcome_screen); if (NULL == self->welcome_screen) return JSMN_ERROR_NOMEM; _ret = discord_welcome_screen_from_jsmnf(f, js, self->welcome_screen); if (_ret < 0) return _ret; ret += sizeof *self->welcome_screen + _ret; };
 
    f = jsmnf_find(root, js, "nsfw_level", sizeof("nsfw_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->nsfw_level = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "stage_instances", sizeof("stage_instances") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->stage_instances = calloc(1, sizeof *self->stage_instances); if (NULL == self->stage_instances) return JSMN_ERROR_NOMEM; _ret = discord_stage_instances_from_jsmnf(f, js, self->stage_instances); if (_ret < 0) return _ret; ret += sizeof *self->stage_instances + _ret; };
 
 
    f = jsmnf_find(root, js, "stickers", sizeof("stickers") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->stickers = calloc(1, sizeof *self->stickers); if (NULL == self->stickers) return JSMN_ERROR_NOMEM; _ret = discord_stickers_from_jsmnf(f, js, self->stickers); if (_ret < 0) return _ret; ret += sizeof *self->stickers + _ret; };
 
 
    f = jsmnf_find(root, js, "guild_scheduled_events", sizeof("guild_scheduled_events") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->guild_scheduled_events = calloc(1, sizeof *self->guild_scheduled_events); if (NULL == self->guild_scheduled_events) return JSMN_ERROR_NOMEM; _ret = discord_guild_scheduled_events_from_jsmnf(f, js, self->guild_scheduled_events); if (_ret < 0) return _ret; ret += sizeof *self->guild_scheduled_events + _ret; };
 
    f = jsmnf_find(root, js, "premium_progress_bar_enabled", sizeof("premium_progress_bar_enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->premium_progress_bar_enabled = ('t' == js[f->v.pos]);
return ret; }
long discord_guilds_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guilds *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_guild, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_guild o = { 0 }; long _ret = discord_guild_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_guild_preview_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_preview *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "splash", sizeof("splash") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->splash = calloc(1, f->v.len + 1); if (NULL == self->splash) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->splash, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "discovery_splash", sizeof("discovery_splash") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->discovery_splash = calloc(1, f->v.len + 1); if (NULL == self->discovery_splash) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->discovery_splash, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "emojis", sizeof("emojis") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emojis = calloc(1, sizeof *self->emojis); if (NULL == self->emojis) return JSMN_ERROR_NOMEM; _ret = discord_emojis_from_jsmnf(f, js, self->emojis); if (_ret < 0) return _ret; ret += sizeof *self->emojis + _ret; };
    f = jsmnf_find(root, js, "features", sizeof("features") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->features = calloc(1, sizeof *self->features); if (NULL == self->features) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->features); if (_ret < 0) return _ret; ret += sizeof *self->features + _ret; };
    f = jsmnf_find(root, js, "approximate_member_count", sizeof("approximate_member_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->approximate_member_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "approximate_presence_count", sizeof("approximate_presence_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->approximate_presence_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "stickers", sizeof("stickers") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->stickers = calloc(1, sizeof *self->stickers); if (NULL == self->stickers) return JSMN_ERROR_NOMEM; _ret = discord_stickers_from_jsmnf(f, js, self->stickers); if (_ret < 0) return _ret; ret += sizeof *self->stickers + _ret; };
return ret; }
long discord_guild_widget_settings_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_widget_settings *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "enabled", sizeof("enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->enabled = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
return ret; }
long discord_guild_widget_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_widget *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "instant_invite", sizeof("instant_invite") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->instant_invite = calloc(1, f->v.len + 1); if (NULL == self->instant_invite) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->instant_invite, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "channels", sizeof("channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->channels = calloc(1, sizeof *self->channels); if (NULL == self->channels) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->channels); if (_ret < 0) return _ret; ret += sizeof *self->channels + _ret; };
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_users_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
    f = jsmnf_find(root, js, "presence_count", sizeof("presence_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->presence_count = (int)strtol(js + f->v.pos, NULL, 10);
return ret; }
long discord_guild_member_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_member *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
 
 
    f = jsmnf_find(root, js, "nick", sizeof("nick") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nick = calloc(1, f->v.len + 1); if (NULL == self->nick) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nick, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "avatar", sizeof("avatar") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar = calloc(1, f->v.len + 1); if (NULL == self->avatar) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
    f = jsmnf_find(root, js, "joined_at", sizeof("joined_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->joined_at);
 
    f = jsmnf_find(root, js, "premium_since", sizeof("premium_since") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->premium_since);
 
    f = jsmnf_find(root, js, "deaf", sizeof("deaf") - 1); if (f && f->type == JSMN_PRIMITIVE) self->deaf = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "muted", sizeof("muted") - 1); if (f && f->type == JSMN_PRIMITIVE) self->muted = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "pending", sizeof("pending") - 1); if (f && f->type == JSMN_PRIMITIVE) self->pending = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->permissions);
 
    f = jsmnf_find(root, js, "communication_disabled_until", sizeof("communication_disabled_until") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->communication_disabled_until);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_guild_members_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_members *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_guild_member, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_guild_member o = { 0 }; long _ret = discord_guild_member_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_integration_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_integration *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->type = calloc(1, f->v.len + 1); if (NULL == self->type) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->type, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "enabled", sizeof("enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->enabled = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "syncing", sizeof("syncing") - 1); if (f && f->type == JSMN_PRIMITIVE) self->syncing = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "role_id", sizeof("role_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->role_id);
    f = jsmnf_find(root, js, "enable_emoticons", sizeof("enable_emoticons") - 1); if (f && f->type == JSMN_PRIMITIVE) self->enable_emoticons = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "expire_behavior", sizeof("expire_behavior") - 1); if (f && f->type == JSMN_PRIMITIVE) self->expire_behavior = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "expire_grace_period", sizeof("expire_grace_period") - 1); if (f && f->type == JSMN_PRIMITIVE) self->expire_grace_period = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
    f = jsmnf_find(root, js, "account", sizeof("account") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->account = calloc(1, sizeof *self->account); if (NULL == self->account) return JSMN_ERROR_NOMEM; _ret = discord_integration_account_from_jsmnf(f, js, self->account); if (_ret < 0) return _ret; ret += sizeof *self->account + _ret; };
    f = jsmnf_find(root, js, "synced_at", sizeof("synced_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->synced_at);
    f = jsmnf_find(root, js, "subscriber_count", sizeof("subscriber_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->subscriber_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "revoked", sizeof("revoked") - 1); if (f && f->type == JSMN_PRIMITIVE) self->revoked = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "application", sizeof("application") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->application = calloc(1, sizeof *self->application); if (NULL == self->application) return JSMN_ERROR_NOMEM; _ret = discord_integration_application_from_jsmnf(f, js, self->application); if (_ret < 0) return _ret; ret += sizeof *self->application + _ret; };
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_integrations_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_integrations *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_integration, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_integration o = { 0 }; long _ret = discord_integration_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_integration_account_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_integration_account *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->id = calloc(1, f->v.len + 1); if (NULL == self->id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_integration_application_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_integration_application *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "summary", sizeof("summary") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->summary = calloc(1, f->v.len + 1); if (NULL == self->summary) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->summary, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "bot", sizeof("bot") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->bot = calloc(1, sizeof *self->bot); if (NULL == self->bot) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->bot); if (_ret < 0) return _ret; ret += sizeof *self->bot + _ret; };
 
return ret; }
long discord_ban_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_ban *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "reason", sizeof("reason") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->reason = calloc(1, f->v.len + 1); if (NULL == self->reason) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->reason, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
return ret; }
long discord_bans_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_bans *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_ban, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_ban o = { 0 }; long _ret = discord_ban_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_welcome_screen_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_welcome_screen *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "welcome_channels", sizeof("welcome_channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->welcome_channels = calloc(1, sizeof *self->welcome_channels); if (NULL == self->welcome_channels) return JSMN_ERROR_NOMEM; _ret = discord_welcome_screen_channels_from_jsmnf(f, js, self->welcome_channels); if (_ret < 0) return _ret; ret += sizeof *self->welcome_channels + _ret; };
 
return ret; }
static long discord_welcome_screen_channel_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_welcome_screen_channel *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "emoji_id", sizeof("emoji_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->emoji_id);
    f = jsmnf_find(root, js, "emoji_name", sizeof("emoji_name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->emoji_name = calloc(1, f->v.len + 1); if (NULL == self->emoji_name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->emoji_name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_welcome_screen_channels_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_welcome_screen_channels *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_welcome_screen_channel, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_welcome_screen_channel o = { 0 }; long _ret = discord_welcome_screen_channel_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_prune_count_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_prune_count *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "pruned", sizeof("pruned") - 1); if (f && f->type == JSMN_PRIMITIVE) self->pruned = (int)strtol(js + f->v.pos, NULL, 10);
return ret; }
long discord_create_guild_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "region", sizeof("region") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->region = calloc(1, f->v.len + 1); if (NULL == self->region) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->region, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "verification_level", sizeof("verification_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->verification_level = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "default_message_notifications", sizeof("default_message_notifications") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_message_notifications = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "explicit_content_filter", sizeof("explicit_content_filter") - 1); if (f && f->type == JSMN_PRIMITIVE) self->explicit_content_filter = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = discord_roles_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
 
 
    f = jsmnf_find(root, js, "channels", sizeof("channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->channels = calloc(1, sizeof *self->channels); if (NULL == self->channels) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->channels); if (_ret < 0) return _ret; ret += sizeof *self->channels + _ret; };
 
 
    f = jsmnf_find(root, js, "afk_channel_id", sizeof("afk_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->afk_channel_id);
 
    f = jsmnf_find(root, js, "afk_timeout", sizeof("afk_timeout") - 1); if (f && f->type == JSMN_PRIMITIVE) self->afk_timeout = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "system_channel_id", sizeof("system_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->system_channel_id);
    f = jsmnf_find(root, js, "system_channel_flags", sizeof("system_channel_flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->system_channel_flags);
return ret; }
long discord_modify_guild_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "verification_level", sizeof("verification_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->verification_level = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "default_message_notifications", sizeof("default_message_notifications") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_message_notifications = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "explicit_content_filter", sizeof("explicit_content_filter") - 1); if (f && f->type == JSMN_PRIMITIVE) self->explicit_content_filter = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "afk_channel_id", sizeof("afk_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->afk_channel_id);
    f = jsmnf_find(root, js, "afk_timeout", sizeof("afk_timeout") - 1); if (f && f->type == JSMN_PRIMITIVE) self->afk_timeout = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "owner_id", sizeof("owner_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->owner_id);
    f = jsmnf_find(root, js, "splash", sizeof("splash") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->splash = calloc(1, f->v.len + 1); if (NULL == self->splash) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->splash, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "discovery_splash", sizeof("discovery_splash") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->discovery_splash = calloc(1, f->v.len + 1); if (NULL == self->discovery_splash) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->discovery_splash, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "banner", sizeof("banner") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->banner = calloc(1, f->v.len + 1); if (NULL == self->banner) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->banner, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "system_channel_id", sizeof("system_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->system_channel_id);
    f = jsmnf_find(root, js, "system_channel_flags", sizeof("system_channel_flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->system_channel_flags);
    f = jsmnf_find(root, js, "rules_channel_id", sizeof("rules_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->rules_channel_id);
    f = jsmnf_find(root, js, "public_updates_channel_id", sizeof("public_updates_channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->public_updates_channel_id);
    f = jsmnf_find(root, js, "preferred_locale", sizeof("preferred_locale") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->preferred_locale = calloc(1, f->v.len + 1); if (NULL == self->preferred_locale) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->preferred_locale, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "features", sizeof("features") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->features = calloc(1, sizeof *self->features); if (NULL == self->features) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->features); if (_ret < 0) return _ret; ret += sizeof *self->features + _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "premium_progress_bar_enabled", sizeof("premium_progress_bar_enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->premium_progress_bar_enabled = ('t' == js[f->v.pos]);
return ret; }
long discord_create_guild_channel_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_channel *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "topic", sizeof("topic") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->topic = calloc(1, f->v.len + 1); if (NULL == self->topic) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->topic, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "bitrate", sizeof("bitrate") - 1); if (f && f->type == JSMN_PRIMITIVE) self->bitrate = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "user_limit", sizeof("user_limit") - 1); if (f && f->type == JSMN_PRIMITIVE) self->user_limit = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1); if (f && f->type == JSMN_PRIMITIVE) self->rate_limit_per_user = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "position", sizeof("position") - 1); if (f && f->type == JSMN_PRIMITIVE) self->position = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "permission_overwrites", sizeof("permission_overwrites") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->permission_overwrites = calloc(1, sizeof *self->permission_overwrites); if (NULL == self->permission_overwrites) return JSMN_ERROR_NOMEM; _ret = discord_overwrites_from_jsmnf(f, js, self->permission_overwrites); if (_ret < 0) return _ret; ret += sizeof *self->permission_overwrites + _ret; };
 
    f = jsmnf_find(root, js, "parent_id", sizeof("parent_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->parent_id);
 
    f = jsmnf_find(root, js, "nsfw", sizeof("nsfw") - 1); if (f && f->type == JSMN_PRIMITIVE) self->nsfw = ('t' == js[f->v.pos]);
return ret; }
static long discord_modify_guild_channel_position_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_channel_position *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "position", sizeof("position") - 1); if (f && f->type == JSMN_PRIMITIVE) self->position = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "lock_category", sizeof("lock_category") - 1); if (f && f->type == JSMN_PRIMITIVE) self->lock_category = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "parent_id", sizeof("parent_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->parent_id);
 
return ret; }
long discord_modify_guild_channel_positions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_channel_positions *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_modify_guild_channel_position, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_modify_guild_channel_position o = { 0 }; long _ret = discord_modify_guild_channel_position_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_list_active_guild_threads_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_list_active_guild_threads *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "threads", sizeof("threads") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->threads = calloc(1, sizeof *self->threads); if (NULL == self->threads) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->threads); if (_ret < 0) return _ret; ret += sizeof *self->threads + _ret; };
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_thread_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
return ret; }
long discord_add_guild_member_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_add_guild_member *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "access_token", sizeof("access_token") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->access_token = calloc(1, f->v.len + 1); if (NULL == self->access_token) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->access_token, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "nick", sizeof("nick") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nick = calloc(1, f->v.len + 1); if (NULL == self->nick) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nick, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
    f = jsmnf_find(root, js, "mute", sizeof("mute") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mute = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "deaf", sizeof("deaf") - 1); if (f && f->type == JSMN_PRIMITIVE) self->deaf = ('t' == js[f->v.pos]);
return ret; }
long discord_modify_guild_member_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_member *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "nick", sizeof("nick") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nick = calloc(1, f->v.len + 1); if (NULL == self->nick) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nick, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
 
 
    f = jsmnf_find(root, js, "mute", sizeof("mute") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mute = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "deaf", sizeof("deaf") - 1); if (f && f->type == JSMN_PRIMITIVE) self->deaf = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
 
 
    f = jsmnf_find(root, js, "communication_disabled_until", sizeof("communication_disabled_until") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->communication_disabled_until);
 
return ret; }
long discord_modify_current_member_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_current_member *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "nick", sizeof("nick") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nick = calloc(1, f->v.len + 1); if (NULL == self->nick) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nick, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_modify_current_user_nick_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_current_user_nick *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "nick", sizeof("nick") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nick = calloc(1, f->v.len + 1); if (NULL == self->nick) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nick, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_create_guild_ban_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_ban *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "delete_message_days", sizeof("delete_message_days") - 1); if (f && f->type == JSMN_PRIMITIVE) self->delete_message_days = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_create_guild_role_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_role *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->permissions);
    f = jsmnf_find(root, js, "color", sizeof("color") - 1); if (f && f->type == JSMN_PRIMITIVE) self->color = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "hoist", sizeof("hoist") - 1); if (f && f->type == JSMN_PRIMITIVE) self->hoist = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "unicode_emoji", sizeof("unicode_emoji") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->unicode_emoji = calloc(1, f->v.len + 1); if (NULL == self->unicode_emoji) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->unicode_emoji, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "mentionable", sizeof("mentionable") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mentionable = ('t' == js[f->v.pos]);
return ret; }
static long discord_modify_guild_role_position_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_role_position *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "position", sizeof("position") - 1); if (f && f->type == JSMN_PRIMITIVE) self->position = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_modify_guild_role_positions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_role_positions *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_modify_guild_role_position, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_modify_guild_role_position o = { 0 }; long _ret = discord_modify_guild_role_position_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_modify_guild_role_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_role *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->permissions);
    f = jsmnf_find(root, js, "color", sizeof("color") - 1); if (f && f->type == JSMN_PRIMITIVE) self->color = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "hoist", sizeof("hoist") - 1); if (f && f->type == JSMN_PRIMITIVE) self->hoist = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "unicode_emoji", sizeof("unicode_emoji") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->unicode_emoji = calloc(1, f->v.len + 1); if (NULL == self->unicode_emoji) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->unicode_emoji, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "mentionable", sizeof("mentionable") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mentionable = ('t' == js[f->v.pos]);
return ret; }
long discord_begin_guild_prune_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_begin_guild_prune *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "days", sizeof("days") - 1); if (f && f->type == JSMN_PRIMITIVE) self->days = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "compute_prune_count", sizeof("compute_prune_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->compute_prune_count = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "include_roles", sizeof("include_roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->include_roles = calloc(1, sizeof *self->include_roles); if (NULL == self->include_roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->include_roles); if (_ret < 0) return _ret; ret += sizeof *self->include_roles + _ret; };
return ret; }
long discord_modify_guild_welcome_screen_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_welcome_screen *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "enabled", sizeof("enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->enabled = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "welcome_channels", sizeof("welcome_channels") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->welcome_channels = calloc(1, sizeof *self->welcome_channels); if (NULL == self->welcome_channels) return JSMN_ERROR_NOMEM; _ret = discord_welcome_screen_channels_from_jsmnf(f, js, self->welcome_channels); if (_ret < 0) return _ret; ret += sizeof *self->welcome_channels + _ret; };
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_modify_current_user_voice_state_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_current_user_voice_state *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "suppress", sizeof("suppress") - 1); if (f && f->type == JSMN_PRIMITIVE) self->suppress = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "request_to_speak_timestamp", sizeof("request_to_speak_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->request_to_speak_timestamp);
 
return ret; }
long discord_modify_user_voice_state_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_user_voice_state *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "suppress", sizeof("suppress") - 1); if (f && f->type == JSMN_PRIMITIVE) self->suppress = ('t' == js[f->v.pos]);
return ret; }
long discord_guild_scheduled_event_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "creator_id", sizeof("creator_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->creator_id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "scheduled_start_time", sizeof("scheduled_start_time") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->scheduled_start_time);
    f = jsmnf_find(root, js, "scheduled_end_time", sizeof("scheduled_end_time") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->scheduled_end_time);
 
    f = jsmnf_find(root, js, "privacy_level", sizeof("privacy_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->privacy_level = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "status", sizeof("status") - 1); if (f && f->type == JSMN_PRIMITIVE) self->status = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "entity_type", sizeof("entity_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->entity_type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "entity_id", sizeof("entity_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->entity_id);
 
    f = jsmnf_find(root, js, "entity_metadata", sizeof("entity_metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->entity_metadata = calloc(1, sizeof *self->entity_metadata); if (NULL == self->entity_metadata) return JSMN_ERROR_NOMEM; _ret = discord_guild_scheduled_event_entity_metadata_from_jsmnf(f, js, self->entity_metadata); if (_ret < 0) return _ret; ret += sizeof *self->entity_metadata + _ret; };
 
 
    f = jsmnf_find(root, js, "creator", sizeof("creator") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->creator = calloc(1, sizeof *self->creator); if (NULL == self->creator) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->creator); if (_ret < 0) return _ret; ret += sizeof *self->creator + _ret; };
 
    f = jsmnf_find(root, js, "user_count", sizeof("user_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->user_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "image", sizeof("image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->image = calloc(1, f->v.len + 1); if (NULL == self->image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_guild_scheduled_event_entity_metadata_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event_entity_metadata *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "location", sizeof("location") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->location = calloc(1, f->v.len + 1); if (NULL == self->location) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->location, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_guild_scheduled_events_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_events *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_guild_scheduled_event, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_guild_scheduled_event o = { 0 }; long _ret = discord_guild_scheduled_event_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_guild_scheduled_event_user_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event_user *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_scheduled_event_id", sizeof("guild_scheduled_event_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_scheduled_event_id);
 
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
 
 
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_guild_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
 
return ret; }
long discord_guild_scheduled_event_users_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event_users *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_guild_scheduled_event_user, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_guild_scheduled_event_user o = { 0 }; long _ret = discord_guild_scheduled_event_user_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_create_guild_scheduled_event_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_scheduled_event *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
 
 
    f = jsmnf_find(root, js, "entity_metadata", sizeof("entity_metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->entity_metadata = calloc(1, sizeof *self->entity_metadata); if (NULL == self->entity_metadata) return JSMN_ERROR_NOMEM; _ret = discord_guild_scheduled_event_entity_metadata_from_jsmnf(f, js, self->entity_metadata); if (_ret < 0) return _ret; ret += sizeof *self->entity_metadata + _ret; };
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "privacy_level", sizeof("privacy_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->privacy_level = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "scheduled_start_time", sizeof("scheduled_start_time") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->scheduled_start_time);
 
 
    f = jsmnf_find(root, js, "scheduled_end_time", sizeof("scheduled_end_time") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->scheduled_end_time);
 
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "entity_type", sizeof("entity_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->entity_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "image", sizeof("image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->image = calloc(1, f->v.len + 1); if (NULL == self->image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_modify_guild_scheduled_event_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_scheduled_event *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
 
 
    f = jsmnf_find(root, js, "entity_metadata", sizeof("entity_metadata") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->entity_metadata = calloc(1, sizeof *self->entity_metadata); if (NULL == self->entity_metadata) return JSMN_ERROR_NOMEM; _ret = discord_guild_scheduled_event_entity_metadata_from_jsmnf(f, js, self->entity_metadata); if (_ret < 0) return _ret; ret += sizeof *self->entity_metadata + _ret; };
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "scheduled_start_time", sizeof("scheduled_start_time") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->scheduled_start_time);
 
 
    f = jsmnf_find(root, js, "scheduled_end_time", sizeof("scheduled_end_time") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->scheduled_end_time);
 
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "entity_type", sizeof("entity_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->entity_type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "status", sizeof("status") - 1); if (f && f->type == JSMN_PRIMITIVE) self->status = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "image", sizeof("image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->image = calloc(1, f->v.len + 1); if (NULL == self->image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_guild_template_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_template *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "code", sizeof("code") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->code = calloc(1, f->v.len + 1); if (NULL == self->code) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->code, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "usage_count", sizeof("usage_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->usage_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "creator_id", sizeof("creator_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->creator_id);
    f = jsmnf_find(root, js, "creator", sizeof("creator") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->creator = calloc(1, sizeof *self->creator); if (NULL == self->creator) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->creator); if (_ret < 0) return _ret; ret += sizeof *self->creator + _ret; };
    f = jsmnf_find(root, js, "created_at", sizeof("created_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->created_at);
    f = jsmnf_find(root, js, "updated_at", sizeof("updated_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->updated_at);
    f = jsmnf_find(root, js, "source_guild_id", sizeof("source_guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->source_guild_id);
    f = jsmnf_find(root, js, "serialized_source_guild", sizeof("serialized_source_guild") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->serialized_source_guild = calloc(1, sizeof *self->serialized_source_guild); if (NULL == self->serialized_source_guild) return JSMN_ERROR_NOMEM; _ret = discord_guild_from_jsmnf(f, js, self->serialized_source_guild); if (_ret < 0) return _ret; ret += sizeof *self->serialized_source_guild + _ret; };
    f = jsmnf_find(root, js, "is_dirty", sizeof("is_dirty") - 1); if (f && f->type == JSMN_PRIMITIVE) self->is_dirty = ('t' == js[f->v.pos]);
return ret; }
long discord_guild_templates_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_templates *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_guild_template, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_guild_template o = { 0 }; long _ret = discord_guild_template_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_create_guild_from_guild_template_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_from_guild_template *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_create_guild_template_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_template *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_modify_guild_template_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_template *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_stage_instance_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_stage_instance *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "topic", sizeof("topic") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->topic = calloc(1, f->v.len + 1); if (NULL == self->topic) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->topic, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "privacy_level", sizeof("privacy_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->privacy_level = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "discoverable_disabled", sizeof("discoverable_disabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->discoverable_disabled = ('t' == js[f->v.pos]);
return ret; }
static long discord_stage_instances_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_stage_instances *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_stage_instance, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_stage_instance o = { 0 }; long _ret = discord_stage_instance_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_create_stage_instance_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_stage_instance *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "topic", sizeof("topic") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->topic = calloc(1, f->v.len + 1); if (NULL == self->topic) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->topic, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "privacy_level", sizeof("privacy_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->privacy_level = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_modify_stage_instance_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_stage_instance *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "topic", sizeof("topic") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->topic = calloc(1, f->v.len + 1); if (NULL == self->topic) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->topic, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "privacy_level", sizeof("privacy_level") - 1); if (f && f->type == JSMN_PRIMITIVE) self->privacy_level = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_sticker_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "pack_id", sizeof("pack_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->pack_id);
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "tags", sizeof("tags") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->tags = calloc(1, f->v.len + 1); if (NULL == self->tags) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->tags, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "format_type", sizeof("format_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->format_type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "available", sizeof("available") - 1); if (f && f->type == JSMN_PRIMITIVE) self->available = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
 
 
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
 
    f = jsmnf_find(root, js, "sort_value", sizeof("sort_value") - 1); if (f && f->type == JSMN_PRIMITIVE) self->sort_value = (int)strtol(js + f->v.pos, NULL, 10);
return ret; }
long discord_stickers_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_stickers *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_sticker, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_sticker o = { 0 }; long _ret = discord_sticker_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_sticker_item_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker_item *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "format_type", sizeof("format_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->format_type = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
static long discord_sticker_items_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker_items *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_sticker_item, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_sticker_item o = { 0 }; long _ret = discord_sticker_item_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_sticker_pack_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker_pack *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "stickers", sizeof("stickers") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->stickers = calloc(1, sizeof *self->stickers); if (NULL == self->stickers) return JSMN_ERROR_NOMEM; _ret = discord_stickers_from_jsmnf(f, js, self->stickers); if (_ret < 0) return _ret; ret += sizeof *self->stickers + _ret; };
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "sku_id", sizeof("sku_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->sku_id);
 
    f = jsmnf_find(root, js, "cover_sticker_id", sizeof("cover_sticker_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->cover_sticker_id);
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "banner_asset_id", sizeof("banner_asset_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->banner_asset_id);
 
return ret; }
long discord_sticker_packs_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_sticker_packs *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_sticker_pack, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_sticker_pack o = { 0 }; long _ret = discord_sticker_pack_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_list_nitro_sticker_packs_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_list_nitro_sticker_packs *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "sticker_packs", sizeof("sticker_packs") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->sticker_packs = calloc(1, sizeof *self->sticker_packs); if (NULL == self->sticker_packs) return JSMN_ERROR_NOMEM; _ret = discord_sticker_packs_from_jsmnf(f, js, self->sticker_packs); if (_ret < 0) return _ret; ret += sizeof *self->sticker_packs + _ret; };
return ret; }
long discord_modify_guild_sticker_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_guild_sticker *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "tags", sizeof("tags") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->tags = calloc(1, f->v.len + 1); if (NULL == self->tags) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->tags, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }















long discord_user_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_user *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "username", sizeof("username") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->username = calloc(1, f->v.len + 1); if (NULL == self->username) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->username, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "discriminator", sizeof("discriminator") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->discriminator = calloc(1, f->v.len + 1); if (NULL == self->discriminator) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->discriminator, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "avatar", sizeof("avatar") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar = calloc(1, f->v.len + 1); if (NULL == self->avatar) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "bot", sizeof("bot") - 1); if (f && f->type == JSMN_PRIMITIVE) self->bot = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "system", sizeof("system") - 1); if (f && f->type == JSMN_PRIMITIVE) self->System = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "mfa_enabled", sizeof("mfa_enabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mfa_enabled = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "banner", sizeof("banner") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->banner = calloc(1, f->v.len + 1); if (NULL == self->banner) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->banner, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "accent_color", sizeof("accent_color") - 1); if (f && f->type == JSMN_PRIMITIVE) self->accent_color = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "locale", sizeof("locale") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->locale = calloc(1, f->v.len + 1); if (NULL == self->locale) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->locale, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "verified", sizeof("verified") - 1); if (f && f->type == JSMN_PRIMITIVE) self->verified = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "email", sizeof("email") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->email = calloc(1, f->v.len + 1); if (NULL == self->email) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->email, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
    f = jsmnf_find(root, js, "premium_type", sizeof("premium_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->premium_type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "public_flags", sizeof("public_flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->public_flags);
return ret; }
long discord_users_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_users *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_user, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_user o = { 0 }; long _ret = discord_user_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_connection_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_connection *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->type = calloc(1, f->v.len + 1); if (NULL == self->type) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->type, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "revoked", sizeof("revoked") - 1); if (f && f->type == JSMN_PRIMITIVE) self->revoked = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "integrations", sizeof("integrations") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->integrations = calloc(1, sizeof *self->integrations); if (NULL == self->integrations) return JSMN_ERROR_NOMEM; _ret = discord_integrations_from_jsmnf(f, js, self->integrations); if (_ret < 0) return _ret; ret += sizeof *self->integrations + _ret; };
 
    f = jsmnf_find(root, js, "verified", sizeof("verified") - 1); if (f && f->type == JSMN_PRIMITIVE) self->verified = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "friend_sync", sizeof("friend_sync") - 1); if (f && f->type == JSMN_PRIMITIVE) self->friend_sync = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "show_activity", sizeof("show_activity") - 1); if (f && f->type == JSMN_PRIMITIVE) self->show_activity = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "visibility", sizeof("visibility") - 1); if (f && f->type == JSMN_PRIMITIVE) self->visibility = (int)strtol(js + f->v.pos, NULL, 10);
return ret; }
long discord_connections_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_connections *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_connection, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_connection o = { 0 }; long _ret = discord_connection_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_modify_current_user_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_current_user *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "username", sizeof("username") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->username = calloc(1, f->v.len + 1); if (NULL == self->username) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->username, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "avatar", sizeof("avatar") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar = calloc(1, f->v.len + 1); if (NULL == self->avatar) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_create_dm_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_dm *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "recipient_id", sizeof("recipient_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->recipient_id);
 
return ret; }
long discord_create_group_dm_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_group_dm *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "access_tokens", sizeof("access_tokens") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->access_tokens = calloc(1, sizeof *self->access_tokens); if (NULL == self->access_tokens) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->access_tokens); if (_ret < 0) return _ret; ret += sizeof *self->access_tokens + _ret; };
 
 
    f = jsmnf_find(root, js, "nicks", sizeof("nicks") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->nicks = calloc(1, sizeof *self->nicks); if (NULL == self->nicks) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->nicks); if (_ret < 0) return _ret; ret += sizeof *self->nicks + _ret; };
 
return ret; }
long discord_voice_state_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_voice_state *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_guild_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
    f = jsmnf_find(root, js, "session_id", sizeof("session_id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->session_id = calloc(1, f->v.len + 1); if (NULL == self->session_id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->session_id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "deaf", sizeof("deaf") - 1); if (f && f->type == JSMN_PRIMITIVE) self->deaf = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "mute", sizeof("mute") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mute = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "self_deaf", sizeof("self_deaf") - 1); if (f && f->type == JSMN_PRIMITIVE) self->self_deaf = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "self_mute", sizeof("self_mute") - 1); if (f && f->type == JSMN_PRIMITIVE) self->self_mute = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "self_stream", sizeof("self_stream") - 1); if (f && f->type == JSMN_PRIMITIVE) self->self_stream = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "self_video", sizeof("self_video") - 1); if (f && f->type == JSMN_PRIMITIVE) self->self_video = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "suppress", sizeof("suppress") - 1); if (f && f->type == JSMN_PRIMITIVE) self->suppress = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "request_to_speak_timestamp", sizeof("request_to_speak_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->request_to_speak_timestamp);
 
return ret; }
long discord_voice_states_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_voice_states *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_voice_state, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_voice_state o = { 0 }; long _ret = discord_voice_state_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_voice_region_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_voice_region *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->id = calloc(1, f->v.len + 1); if (NULL == self->id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "optimal", sizeof("optimal") - 1); if (f && f->type == JSMN_PRIMITIVE) self->optimal = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "deprecated", sizeof("deprecated") - 1); if (f && f->type == JSMN_PRIMITIVE) self->deprecated = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "custom", sizeof("custom") - 1); if (f && f->type == JSMN_PRIMITIVE) self->custom = ('t' == js[f->v.pos]);
return ret; }
long discord_voice_regions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_voice_regions *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_voice_region, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_voice_region o = { 0 }; long _ret = discord_voice_region_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_webhook_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_webhook *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
 
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "token", sizeof("token") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->token = calloc(1, f->v.len + 1); if (NULL == self->token) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->token, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
 
    f = jsmnf_find(root, js, "source_channel", sizeof("source_channel") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->source_channel = calloc(1, sizeof *self->source_channel); if (NULL == self->source_channel) return JSMN_ERROR_NOMEM; _ret = discord_channel_from_jsmnf(f, js, self->source_channel); if (_ret < 0) return _ret; ret += sizeof *self->source_channel + _ret; };
 
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_webhooks_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_webhooks *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_webhook, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_webhook o = { 0 }; long _ret = discord_webhook_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_create_webhook_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_webhook *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "avatar", sizeof("avatar") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar = calloc(1, f->v.len + 1); if (NULL == self->avatar) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_modify_webhook_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_webhook *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "avatar", sizeof("avatar") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar = calloc(1, f->v.len + 1); if (NULL == self->avatar) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
return ret; }
long discord_modify_webhook_with_token_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_modify_webhook_with_token *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "avatar", sizeof("avatar") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar = calloc(1, f->v.len + 1); if (NULL == self->avatar) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
return ret; }
long discord_execute_webhook_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_execute_webhook *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "username", sizeof("username") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->username = calloc(1, f->v.len + 1); if (NULL == self->username) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->username, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "avatar_url", sizeof("avatar_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar_url = calloc(1, f->v.len + 1); if (NULL == self->avatar_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "tts", sizeof("tts") - 1); if (f && f->type == JSMN_PRIMITIVE) self->tts = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
 
    f = jsmnf_find(root, js, "allowed_mentions", sizeof("allowed_mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->allowed_mentions = calloc(1, sizeof *self->allowed_mentions); if (NULL == self->allowed_mentions) return JSMN_ERROR_NOMEM; _ret = discord_allowed_mention_from_jsmnf(f, js, self->allowed_mentions); if (_ret < 0) return _ret; ret += sizeof *self->allowed_mentions + _ret; };
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
 
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
 
return ret; }
long discord_edit_webhook_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_edit_webhook_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
 
    f = jsmnf_find(root, js, "allowed_mentions", sizeof("allowed_mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->allowed_mentions = calloc(1, sizeof *self->allowed_mentions); if (NULL == self->allowed_mentions) return JSMN_ERROR_NOMEM; _ret = discord_allowed_mention_from_jsmnf(f, js, self->allowed_mentions); if (_ret < 0) return _ret; ret += sizeof *self->allowed_mentions + _ret; };
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
return ret; }




























static long discord_activity_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "created_at", sizeof("created_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->created_at);
 
 
    f = jsmnf_find(root, js, "timestamps", sizeof("timestamps") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->timestamps = calloc(1, sizeof *self->timestamps); if (NULL == self->timestamps) return JSMN_ERROR_NOMEM; _ret = discord_activity_timestamps_from_jsmnf(f, js, self->timestamps); if (_ret < 0) return _ret; ret += sizeof *self->timestamps + _ret; };
 
 
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
 
 
    f = jsmnf_find(root, js, "details", sizeof("details") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->details = calloc(1, f->v.len + 1); if (NULL == self->details) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->details, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "state", sizeof("state") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->state = calloc(1, f->v.len + 1); if (NULL == self->state) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->state, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "emoji", sizeof("emoji") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emoji = calloc(1, sizeof *self->emoji); if (NULL == self->emoji) return JSMN_ERROR_NOMEM; _ret = discord_activity_emoji_from_jsmnf(f, js, self->emoji); if (_ret < 0) return _ret; ret += sizeof *self->emoji + _ret; };
 
 
    f = jsmnf_find(root, js, "party", sizeof("party") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->party = calloc(1, sizeof *self->party); if (NULL == self->party) return JSMN_ERROR_NOMEM; _ret = discord_activity_party_from_jsmnf(f, js, self->party); if (_ret < 0) return _ret; ret += sizeof *self->party + _ret; };
 
 
    f = jsmnf_find(root, js, "assets", sizeof("assets") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->assets = calloc(1, sizeof *self->assets); if (NULL == self->assets) return JSMN_ERROR_NOMEM; _ret = discord_activity_assets_from_jsmnf(f, js, self->assets); if (_ret < 0) return _ret; ret += sizeof *self->assets + _ret; };
 
 
    f = jsmnf_find(root, js, "secrets", sizeof("secrets") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->secrets = calloc(1, sizeof *self->secrets); if (NULL == self->secrets) return JSMN_ERROR_NOMEM; _ret = discord_activity_secrets_from_jsmnf(f, js, self->secrets); if (_ret < 0) return _ret; ret += sizeof *self->secrets + _ret; };
 
    f = jsmnf_find(root, js, "instance", sizeof("instance") - 1); if (f && f->type == JSMN_PRIMITIVE) self->instance = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
 
    f = jsmnf_find(root, js, "buttons", sizeof("buttons") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->buttons = calloc(1, sizeof *self->buttons); if (NULL == self->buttons) return JSMN_ERROR_NOMEM; _ret = discord_activity_buttons_from_jsmnf(f, js, self->buttons); if (_ret < 0) return _ret; ret += sizeof *self->buttons + _ret; };
 
return ret; }
static long discord_activities_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activities *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_activity, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_activity o = { 0 }; long _ret = discord_activity_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_activity_timestamps_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_timestamps *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "start", sizeof("start") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->start);
    f = jsmnf_find(root, js, "end", sizeof("end") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->end);
return ret; }
static long discord_activity_emoji_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_emoji *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "animated", sizeof("animated") - 1); if (f && f->type == JSMN_PRIMITIVE) self->animated = ('t' == js[f->v.pos]);
return ret; }
static long discord_activity_party_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_party *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->id = calloc(1, f->v.len + 1); if (NULL == self->id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "size", sizeof("size") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->size = calloc(1, sizeof *self->size); if (NULL == self->size) return JSMN_ERROR_NOMEM; _ret = integers_from_jsmnf(f, js, self->size); if (_ret < 0) return _ret; ret += sizeof *self->size + _ret; };
return ret; }
static long discord_activity_assets_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_assets *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "large_image", sizeof("large_image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->large_image = calloc(1, f->v.len + 1); if (NULL == self->large_image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->large_image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "large_text", sizeof("large_text") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->large_text = calloc(1, f->v.len + 1); if (NULL == self->large_text) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->large_text, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "small_image", sizeof("small_image") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->small_image = calloc(1, f->v.len + 1); if (NULL == self->small_image) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->small_image, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "small_text", sizeof("small_text") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->small_text = calloc(1, f->v.len + 1); if (NULL == self->small_text) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->small_text, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_activity_secrets_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_secrets *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "join", sizeof("join") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->join = calloc(1, f->v.len + 1); if (NULL == self->join) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->join, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "spectate", sizeof("spectate") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->spectate = calloc(1, f->v.len + 1); if (NULL == self->spectate) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->spectate, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "match", sizeof("match") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->match = calloc(1, f->v.len + 1); if (NULL == self->match) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->match, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_activity_button_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_button *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "label", sizeof("label") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->label = calloc(1, f->v.len + 1); if (NULL == self->label) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->label, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_activity_buttons_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_activity_buttons *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_activity_button, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_activity_button o = { 0 }; long _ret = discord_activity_button_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_presence_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_presence_update *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
 
 
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
 
 
    f = jsmnf_find(root, js, "status", sizeof("status") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->status = calloc(1, f->v.len + 1); if (NULL == self->status) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->status, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "client_status", sizeof("client_status") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->client_status = calloc(1, sizeof *self->client_status); if (NULL == self->client_status) return JSMN_ERROR_NOMEM; _ret = discord_client_status_from_jsmnf(f, js, self->client_status); if (_ret < 0) return _ret; ret += sizeof *self->client_status + _ret; };
 
 
    f = jsmnf_find(root, js, "activities", sizeof("activities") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->activities = calloc(1, sizeof *self->activities); if (NULL == self->activities) return JSMN_ERROR_NOMEM; _ret = discord_activities_from_jsmnf(f, js, self->activities); if (_ret < 0) return _ret; ret += sizeof *self->activities + _ret; };
 
 
    f = jsmnf_find(root, js, "since", sizeof("since") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->since);
 
    f = jsmnf_find(root, js, "afk", sizeof("afk") - 1); if (f && f->type == JSMN_PRIMITIVE) self->afk = ('t' == js[f->v.pos]);
return ret; }
static long discord_client_status_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_client_status *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "desktop", sizeof("desktop") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->desktop = calloc(1, f->v.len + 1); if (NULL == self->desktop) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->desktop, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "mobile", sizeof("mobile") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->mobile = calloc(1, f->v.len + 1); if (NULL == self->mobile) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->mobile, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "web", sizeof("web") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->web = calloc(1, f->v.len + 1); if (NULL == self->web) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->web, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_presence_updates_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_presence_updates *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_presence_update, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_presence_update o = { 0 }; long _ret = discord_presence_update_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_ready_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_ready *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "v", sizeof("v") - 1); if (f && f->type == JSMN_PRIMITIVE) self->v = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
    f = jsmnf_find(root, js, "guilds", sizeof("guilds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->guilds = calloc(1, sizeof *self->guilds); if (NULL == self->guilds) return JSMN_ERROR_NOMEM; _ret = discord_guilds_from_jsmnf(f, js, self->guilds); if (_ret < 0) return _ret; ret += sizeof *self->guilds + _ret; };
    f = jsmnf_find(root, js, "session_id", sizeof("session_id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->session_id = calloc(1, f->v.len + 1); if (NULL == self->session_id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->session_id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "shard", sizeof("shard") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->shard = calloc(1, sizeof *self->shard); if (NULL == self->shard) return JSMN_ERROR_NOMEM; _ret = integers_from_jsmnf(f, js, self->shard); if (_ret < 0) return _ret; ret += sizeof *self->shard + _ret; };
    f = jsmnf_find(root, js, "application", sizeof("application") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->application = calloc(1, sizeof *self->application); if (NULL == self->application) return JSMN_ERROR_NOMEM; _ret = discord_application_from_jsmnf(f, js, self->application); if (_ret < 0) return _ret; ret += sizeof *self->application + _ret; };
return ret; }
long discord_auto_moderation_action_execution_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auto_moderation_action_execution *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "action", sizeof("action") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->action = calloc(1, sizeof *self->action); if (NULL == self->action) return JSMN_ERROR_NOMEM; _ret = discord_auto_moderation_action_from_jsmnf(f, js, self->action); if (_ret < 0) return _ret; ret += sizeof *self->action + _ret; };
    f = jsmnf_find(root, js, "rule_trigger_type", sizeof("rule_trigger_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->rule_trigger_type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "message_id", sizeof("message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->message_id);
    f = jsmnf_find(root, js, "alert_system_message_id", sizeof("alert_system_message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->alert_system_message_id);
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "matched_keyword", sizeof("matched_keyword") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->matched_keyword = calloc(1, f->v.len + 1); if (NULL == self->matched_keyword) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->matched_keyword, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "matched_content", sizeof("matched_content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->matched_content = calloc(1, f->v.len + 1); if (NULL == self->matched_content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->matched_content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_thread_list_sync_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_thread_list_sync *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_ids", sizeof("channel_ids") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->channel_ids = calloc(1, sizeof *self->channel_ids); if (NULL == self->channel_ids) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->channel_ids); if (_ret < 0) return _ret; ret += sizeof *self->channel_ids + _ret; };
    f = jsmnf_find(root, js, "threads", sizeof("threads") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->threads = calloc(1, sizeof *self->threads); if (NULL == self->threads) return JSMN_ERROR_NOMEM; _ret = discord_channels_from_jsmnf(f, js, self->threads); if (_ret < 0) return _ret; ret += sizeof *self->threads + _ret; };
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_thread_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
return ret; }
long discord_thread_members_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_thread_members_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "member_count", sizeof("member_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->member_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "added_members", sizeof("added_members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->added_members = calloc(1, sizeof *self->added_members); if (NULL == self->added_members) return JSMN_ERROR_NOMEM; _ret = discord_thread_members_from_jsmnf(f, js, self->added_members); if (_ret < 0) return _ret; ret += sizeof *self->added_members + _ret; };
    f = jsmnf_find(root, js, "removed_member_ids", sizeof("removed_member_ids") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->removed_member_ids = calloc(1, sizeof *self->removed_member_ids); if (NULL == self->removed_member_ids) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->removed_member_ids); if (_ret < 0) return _ret; ret += sizeof *self->removed_member_ids + _ret; };
return ret; }
long discord_channel_pins_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_channel_pins_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "last_pin_timestamp", sizeof("last_pin_timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->last_pin_timestamp);
return ret; }
long discord_guild_ban_add_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_ban_add *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
return ret; }
long discord_guild_ban_remove_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_ban_remove *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
return ret; }
long discord_guild_emojis_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_emojis_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "emojis", sizeof("emojis") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emojis = calloc(1, sizeof *self->emojis); if (NULL == self->emojis) return JSMN_ERROR_NOMEM; _ret = discord_emojis_from_jsmnf(f, js, self->emojis); if (_ret < 0) return _ret; ret += sizeof *self->emojis + _ret; };
return ret; }
long discord_guild_stickers_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_stickers_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "stickers", sizeof("stickers") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->stickers = calloc(1, sizeof *self->stickers); if (NULL == self->stickers) return JSMN_ERROR_NOMEM; _ret = discord_stickers_from_jsmnf(f, js, self->stickers); if (_ret < 0) return _ret; ret += sizeof *self->stickers + _ret; };
return ret; }
long discord_guild_integrations_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_integrations_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_guild_member_remove_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_member_remove *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
return ret; }
long discord_guild_member_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_member_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->roles = calloc(1, sizeof *self->roles); if (NULL == self->roles) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->roles); if (_ret < 0) return _ret; ret += sizeof *self->roles + _ret; };
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
    f = jsmnf_find(root, js, "nick", sizeof("nick") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nick = calloc(1, f->v.len + 1); if (NULL == self->nick) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nick, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "avatar", sizeof("avatar") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar = calloc(1, f->v.len + 1); if (NULL == self->avatar) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "joined_at", sizeof("joined_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->joined_at);
    f = jsmnf_find(root, js, "premium_since", sizeof("premium_since") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->premium_since);
    f = jsmnf_find(root, js, "deaf", sizeof("deaf") - 1); if (f && f->type == JSMN_PRIMITIVE) self->deaf = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "mute", sizeof("mute") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mute = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "pending", sizeof("pending") - 1); if (f && f->type == JSMN_PRIMITIVE) self->pending = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "communication_disabled_until", sizeof("communication_disabled_until") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->communication_disabled_until);
return ret; }
long discord_guild_members_chunk_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_members_chunk *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_guild_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
    f = jsmnf_find(root, js, "chunk_index", sizeof("chunk_index") - 1); if (f && f->type == JSMN_PRIMITIVE) self->chunk_index = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "chunk_count", sizeof("chunk_count") - 1); if (f && f->type == JSMN_PRIMITIVE) self->chunk_count = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "not_found", sizeof("not_found") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->not_found = calloc(1, sizeof *self->not_found); if (NULL == self->not_found) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->not_found); if (_ret < 0) return _ret; ret += sizeof *self->not_found + _ret; };
    f = jsmnf_find(root, js, "presences", sizeof("presences") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->presences = calloc(1, sizeof *self->presences); if (NULL == self->presences) return JSMN_ERROR_NOMEM; _ret = discord_presence_updates_from_jsmnf(f, js, self->presences); if (_ret < 0) return _ret; ret += sizeof *self->presences + _ret; };
    f = jsmnf_find(root, js, "nonce", sizeof("nonce") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->nonce = calloc(1, f->v.len + 1); if (NULL == self->nonce) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->nonce, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_guild_role_create_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_role_create *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "role", sizeof("role") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->role = calloc(1, sizeof *self->role); if (NULL == self->role) return JSMN_ERROR_NOMEM; _ret = discord_role_from_jsmnf(f, js, self->role); if (_ret < 0) return _ret; ret += sizeof *self->role + _ret; };
return ret; }
long discord_guild_role_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_role_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "role", sizeof("role") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->role = calloc(1, sizeof *self->role); if (NULL == self->role) return JSMN_ERROR_NOMEM; _ret = discord_role_from_jsmnf(f, js, self->role); if (_ret < 0) return _ret; ret += sizeof *self->role + _ret; };
return ret; }
long discord_guild_role_delete_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_role_delete *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "role_id", sizeof("role_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->role_id);
return ret; }
long discord_guild_scheduled_event_user_add_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event_user_add *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_scheduled_event_id", sizeof("guild_scheduled_event_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_scheduled_event_id);
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_guild_scheduled_event_user_remove_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_scheduled_event_user_remove *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_scheduled_event_id", sizeof("guild_scheduled_event_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_scheduled_event_id);
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_integration_delete_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_integration_delete *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
return ret; }
long discord_invite_create_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invite_create *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "code", sizeof("code") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->code = calloc(1, f->v.len + 1); if (NULL == self->code) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->code, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "created_at", sizeof("created_at") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->created_at);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "inviter", sizeof("inviter") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->inviter = calloc(1, sizeof *self->inviter); if (NULL == self->inviter) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->inviter); if (_ret < 0) return _ret; ret += sizeof *self->inviter + _ret; };
    f = jsmnf_find(root, js, "max_age", sizeof("max_age") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_age = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "max_uses", sizeof("max_uses") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_uses = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "target_type", sizeof("target_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->target_type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "target_user", sizeof("target_user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->target_user = calloc(1, sizeof *self->target_user); if (NULL == self->target_user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->target_user); if (_ret < 0) return _ret; ret += sizeof *self->target_user + _ret; };
    f = jsmnf_find(root, js, "target_application", sizeof("target_application") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->target_application = calloc(1, sizeof *self->target_application); if (NULL == self->target_application) return JSMN_ERROR_NOMEM; _ret = discord_application_from_jsmnf(f, js, self->target_application); if (_ret < 0) return _ret; ret += sizeof *self->target_application + _ret; };
    f = jsmnf_find(root, js, "temporary", sizeof("temporary") - 1); if (f && f->type == JSMN_PRIMITIVE) self->temporary = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "uses", sizeof("uses") - 1); if (f && f->type == JSMN_PRIMITIVE) self->uses = (int)strtol(js + f->v.pos, NULL, 10);
return ret; }
long discord_invite_delete_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_invite_delete *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "code", sizeof("code") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->code = calloc(1, f->v.len + 1); if (NULL == self->code) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->code, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_message_delete_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_delete *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_message_delete_bulk_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_delete_bulk *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "ids", sizeof("ids") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->ids = calloc(1, sizeof *self->ids); if (NULL == self->ids) return JSMN_ERROR_NOMEM; _ret = snowflakes_from_jsmnf(f, js, self->ids); if (_ret < 0) return _ret; ret += sizeof *self->ids + _ret; };
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_message_reaction_add_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_reaction_add *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "message_id", sizeof("message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->message_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_guild_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
    f = jsmnf_find(root, js, "emoji", sizeof("emoji") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emoji = calloc(1, sizeof *self->emoji); if (NULL == self->emoji) return JSMN_ERROR_NOMEM; _ret = discord_emoji_from_jsmnf(f, js, self->emoji); if (_ret < 0) return _ret; ret += sizeof *self->emoji + _ret; };
return ret; }
long discord_message_reaction_remove_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_reaction_remove *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "message_id", sizeof("message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->message_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "emoji", sizeof("emoji") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emoji = calloc(1, sizeof *self->emoji); if (NULL == self->emoji) return JSMN_ERROR_NOMEM; _ret = discord_emoji_from_jsmnf(f, js, self->emoji); if (_ret < 0) return _ret; ret += sizeof *self->emoji + _ret; };
return ret; }
long discord_message_reaction_remove_all_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_reaction_remove_all *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "message_id", sizeof("message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->message_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
return ret; }
long discord_message_reaction_remove_emoji_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_reaction_remove_emoji *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "message_id", sizeof("message_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->message_id);
    f = jsmnf_find(root, js, "emoji", sizeof("emoji") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emoji = calloc(1, sizeof *self->emoji); if (NULL == self->emoji) return JSMN_ERROR_NOMEM; _ret = discord_emoji_from_jsmnf(f, js, self->emoji); if (_ret < 0) return _ret; ret += sizeof *self->emoji + _ret; };
return ret; }
long discord_typing_start_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_typing_start *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "user_id", sizeof("user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->user_id);
    f = jsmnf_find(root, js, "timestamp", sizeof("timestamp") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->timestamp);
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_guild_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
return ret; }
long discord_voice_server_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_voice_server_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "token", sizeof("token") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->token = calloc(1, f->v.len + 1); if (NULL == self->token) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->token, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "endpoint", sizeof("endpoint") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->endpoint = calloc(1, f->v.len + 1); if (NULL == self->endpoint) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->endpoint, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_webhooks_update_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_webhooks_update *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
return ret; }
long discord_session_start_limit_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_session_start_limit *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "total", sizeof("total") - 1); if (f && f->type == JSMN_PRIMITIVE) self->total = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "remaining", sizeof("remaining") - 1); if (f && f->type == JSMN_PRIMITIVE) self->remaining = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "reset_after", sizeof("reset_after") - 1); if (f && f->type == JSMN_PRIMITIVE) self->reset_after = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "max_concurrency", sizeof("max_concurrency") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_concurrency = (int)strtol(js + f->v.pos, NULL, 10);
return ret; }
long discord_auth_response_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_auth_response *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "application", sizeof("application") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->application = calloc(1, sizeof *self->application); if (NULL == self->application) return JSMN_ERROR_NOMEM; _ret = discord_application_from_jsmnf(f, js, self->application); if (_ret < 0) return _ret; ret += sizeof *self->application + _ret; };
    f = jsmnf_find(root, js, "scopes", sizeof("scopes") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->scopes = calloc(1, sizeof *self->scopes); if (NULL == self->scopes) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->scopes); if (_ret < 0) return _ret; ret += sizeof *self->scopes + _ret; };
    f = jsmnf_find(root, js, "expires", sizeof("expires") - 1); if (f && f->type == JSMN_STRING) cog_iso8601_to_unix_ms(js + f->v.pos, f->v.len, &self->expires);
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
return ret; }









































long discord_role_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_role *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "color", sizeof("color") - 1); if (f && f->type == JSMN_PRIMITIVE) self->color = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "hoist", sizeof("hoist") - 1); if (f && f->type == JSMN_PRIMITIVE) self->hoist = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "unicode_emoji", sizeof("unicode_emoji") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->unicode_emoji = calloc(1, f->v.len + 1); if (NULL == self->unicode_emoji) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->unicode_emoji, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "position", sizeof("position") - 1); if (f && f->type == JSMN_PRIMITIVE) self->position = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->permissions);
    f = jsmnf_find(root, js, "managed", sizeof("managed") - 1); if (f && f->type == JSMN_PRIMITIVE) self->managed = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "mentionable", sizeof("mentionable") - 1); if (f && f->type == JSMN_PRIMITIVE) self->mentionable = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "tags", sizeof("tags") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->tags = calloc(1, sizeof *self->tags); if (NULL == self->tags) return JSMN_ERROR_NOMEM; _ret = discord_role_tag_from_jsmnf(f, js, self->tags); if (_ret < 0) return _ret; ret += sizeof *self->tags + _ret; };
 
return ret; }
long discord_roles_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_roles *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_role, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_role o = { 0 }; long _ret = discord_role_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_role_tag_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_role_tag *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "bot_id", sizeof("bot_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->bot_id);
 
 
    f = jsmnf_find(root, js, "integration_id", sizeof("integration_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->integration_id);
 
    f = jsmnf_find(root, js, "premium_subscribe", sizeof("premium_subscribe") - 1); if (f && f->type == JSMN_PRIMITIVE) self->premium_subscribe = ('t' == js[f->v.pos]);
return ret; }
long discord_team_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_team *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "icon", sizeof("icon") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->icon = calloc(1, f->v.len + 1); if (NULL == self->icon) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->icon, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->members = calloc(1, sizeof *self->members); if (NULL == self->members) return JSMN_ERROR_NOMEM; _ret = discord_team_members_from_jsmnf(f, js, self->members); if (_ret < 0) return _ret; ret += sizeof *self->members + _ret; };
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "owner_user_id", sizeof("owner_user_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->owner_user_id);
return ret; }
static long discord_team_member_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_team_member *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "membership_state", sizeof("membership_state") - 1); if (f && f->type == JSMN_PRIMITIVE) self->membership_state = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->permissions = calloc(1, sizeof *self->permissions); if (NULL == self->permissions) return JSMN_ERROR_NOMEM; _ret = bitmasks_from_jsmnf(f, js, self->permissions); if (_ret < 0) return _ret; ret += sizeof *self->permissions + _ret; };
 
    f = jsmnf_find(root, js, "team_id", sizeof("team_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->team_id);
 
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
 
return ret; }
static long discord_team_members_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_team_members *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_team_member, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_team_member o = { 0 }; long _ret = discord_team_member_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }



long discord_application_command_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
 
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
 
 
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
 
 
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
 
    f = jsmnf_find(root, js, "default_member_permissions", sizeof("default_member_permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->default_member_permissions);
 
 
    f = jsmnf_find(root, js, "dm_permission", sizeof("dm_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->dm_permission = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "default_permission", sizeof("default_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_permission = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "version", sizeof("version") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->version);
 
return ret; }
long discord_application_commands_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_commands *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_application_command, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_application_command o = { 0 }; long _ret = discord_application_command_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_application_command_option_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_option *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "required", sizeof("required") - 1); if (f && f->type == JSMN_PRIMITIVE) self->required = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "choices", sizeof("choices") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->choices = calloc(1, sizeof *self->choices); if (NULL == self->choices) return JSMN_ERROR_NOMEM; _ret = discord_application_command_option_choices_from_jsmnf(f, js, self->choices); if (_ret < 0) return _ret; ret += sizeof *self->choices + _ret; };
 
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
 
    f = jsmnf_find(root, js, "channel_types", sizeof("channel_types") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->channel_types = calloc(1, sizeof *self->channel_types); if (NULL == self->channel_types) return JSMN_ERROR_NOMEM; _ret = integers_from_jsmnf(f, js, self->channel_types); if (_ret < 0) return _ret; ret += sizeof *self->channel_types + _ret; };
 
 
    f = jsmnf_find(root, js, "min_value", sizeof("min_value") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->min_value = calloc(1, f->v.len + 1); if (NULL == self->min_value) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->min_value, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "max_value", sizeof("max_value") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->max_value = calloc(1, f->v.len + 1); if (NULL == self->max_value) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->max_value, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "autocomplete", sizeof("autocomplete") - 1); if (f && f->type == JSMN_PRIMITIVE) self->autocomplete = ('t' == js[f->v.pos]);
 
return ret; }
static long discord_application_command_options_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_options *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_application_command_option, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_application_command_option o = { 0 }; long _ret = discord_application_command_option_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_application_command_option_choice_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_option_choice *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "value", sizeof("value") - 1); if (f) { self->value = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
return ret; }
static long discord_application_command_option_choices_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_option_choices *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_application_command_option_choice, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_application_command_option_choice o = { 0 }; long _ret = discord_application_command_option_choice_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_application_command_interaction_data_option_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_interaction_data_option *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "value", sizeof("value") - 1); if (f) { self->value = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
 
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_interaction_data_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
    f = jsmnf_find(root, js, "focused", sizeof("focused") - 1); if (f && f->type == JSMN_PRIMITIVE) self->focused = ('t' == js[f->v.pos]);
return ret; }
static long discord_application_command_interaction_data_options_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_interaction_data_options *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_application_command_interaction_data_option, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_application_command_interaction_data_option o = { 0 }; long _ret = discord_application_command_interaction_data_option_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_guild_application_command_permission_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_application_command_permission *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "permissions", sizeof("permissions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->permissions = calloc(1, sizeof *self->permissions); if (NULL == self->permissions) return JSMN_ERROR_NOMEM; _ret = discord_application_command_permissions_from_jsmnf(f, js, self->permissions); if (_ret < 0) return _ret; ret += sizeof *self->permissions + _ret; };
return ret; }
long discord_guild_application_command_permissions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_guild_application_command_permissions *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_guild_application_command_permission, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_guild_application_command_permission o = { 0 }; long _ret = discord_guild_application_command_permission_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_application_command_permission_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_permission *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "permission", sizeof("permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->permission = ('t' == js[f->v.pos]);
return ret; }
long discord_application_command_permissions_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_application_command_permissions *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_application_command_permission, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_application_command_permission o = { 0 }; long _ret = discord_application_command_permission_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_create_global_application_command_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_global_application_command *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
 
    f = jsmnf_find(root, js, "default_member_permissions", sizeof("default_member_permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->default_member_permissions);
 
    f = jsmnf_find(root, js, "dm_permission", sizeof("dm_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->dm_permission = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "default_permission", sizeof("default_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_permission = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_edit_global_application_command_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_edit_global_application_command *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
 
    f = jsmnf_find(root, js, "default_member_permissions", sizeof("default_member_permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->default_member_permissions);
 
    f = jsmnf_find(root, js, "dm_permission", sizeof("dm_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->dm_permission = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "default_permission", sizeof("default_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_permission = ('t' == js[f->v.pos]);
return ret; }
long discord_create_guild_application_command_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_guild_application_command *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
 
    f = jsmnf_find(root, js, "default_member_permissions", sizeof("default_member_permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->default_member_permissions);
 
    f = jsmnf_find(root, js, "dm_permission", sizeof("dm_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->dm_permission = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "default_permission", sizeof("default_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_permission = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_edit_guild_application_command_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_edit_guild_application_command *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
 
    f = jsmnf_find(root, js, "default_member_permissions", sizeof("default_member_permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->default_member_permissions);
 
    f = jsmnf_find(root, js, "default_permission", sizeof("default_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->default_permission = ('t' == js[f->v.pos]);
return ret; }
long discord_bulk_overwrite_guild_application_commands_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_bulk_overwrite_guild_application_commands *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "name_localizations", sizeof("name_localizations") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->name_localizations = calloc(1, sizeof *self->name_localizations); if (NULL == self->name_localizations) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->name_localizations); if (_ret < 0) return _ret; ret += sizeof *self->name_localizations + _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description_localizations", sizeof("description_localizations") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->description_localizations = calloc(1, sizeof *self->description_localizations); if (NULL == self->description_localizations) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->description_localizations); if (_ret < 0) return _ret; ret += sizeof *self->description_localizations + _ret; };
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
 
    f = jsmnf_find(root, js, "default_member_permissions", sizeof("default_member_permissions") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->default_member_permissions);
 
    f = jsmnf_find(root, js, "dm_permission", sizeof("dm_permission") - 1); if (f && f->type == JSMN_PRIMITIVE) self->dm_permission = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
return ret; }
long discord_component_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_component *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "custom_id", sizeof("custom_id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->custom_id = calloc(1, f->v.len + 1); if (NULL == self->custom_id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->custom_id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "disabled", sizeof("disabled") - 1); if (f && f->type == JSMN_PRIMITIVE) self->disabled = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "style", sizeof("style") - 1); if (f && f->type == JSMN_PRIMITIVE) self->style = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "label", sizeof("label") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->label = calloc(1, f->v.len + 1); if (NULL == self->label) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->label, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "emoji", sizeof("emoji") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emoji = calloc(1, sizeof *self->emoji); if (NULL == self->emoji) return JSMN_ERROR_NOMEM; _ret = discord_emoji_from_jsmnf(f, js, self->emoji); if (_ret < 0) return _ret; ret += sizeof *self->emoji + _ret; };
 
    f = jsmnf_find(root, js, "url", sizeof("url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->url = calloc(1, f->v.len + 1); if (NULL == self->url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_select_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
 
    f = jsmnf_find(root, js, "placeholder", sizeof("placeholder") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->placeholder = calloc(1, f->v.len + 1); if (NULL == self->placeholder) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->placeholder, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "min_values", sizeof("min_values") - 1); if (f && f->type == JSMN_PRIMITIVE) self->min_values = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "max_values", sizeof("max_values") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_values = (int)strtol(js + f->v.pos, NULL, 10);
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
    f = jsmnf_find(root, js, "min_length", sizeof("min_length") - 1); if (f && f->type == JSMN_PRIMITIVE) self->min_length = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "max_length", sizeof("max_length") - 1); if (f && f->type == JSMN_PRIMITIVE) self->max_length = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "required", sizeof("required") - 1); if (f && f->type == JSMN_PRIMITIVE) self->required = ('t' == js[f->v.pos]);
    f = jsmnf_find(root, js, "value", sizeof("value") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->value = calloc(1, f->v.len + 1); if (NULL == self->value) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->value, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_components_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_components *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_component, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_component o = { 0 }; long _ret = discord_component_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
static long discord_select_option_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_select_option *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "label", sizeof("label") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->label = calloc(1, f->v.len + 1); if (NULL == self->label) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->label, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "value", sizeof("value") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->value = calloc(1, f->v.len + 1); if (NULL == self->value) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->value, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "description", sizeof("description") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->description = calloc(1, f->v.len + 1); if (NULL == self->description) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->description, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "emoji", sizeof("emoji") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->emoji = calloc(1, sizeof *self->emoji); if (NULL == self->emoji) return JSMN_ERROR_NOMEM; _ret = discord_emoji_from_jsmnf(f, js, self->emoji); if (_ret < 0) return _ret; ret += sizeof *self->emoji + _ret; };
 
    f = jsmnf_find(root, js, "default", sizeof("default") - 1); if (f && f->type == JSMN_PRIMITIVE) self->Default = ('t' == js[f->v.pos]);
return ret; }
long discord_select_options_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_select_options *self) { long ret = sizeof *self * root->size; int i; if (!ret) return 0;
    __carray_init(self, root->size, struct discord_select_option, , ); for (i = 0; i < root->size; ++i) { jsmnf_pair *f = root->fields + i; struct discord_select_option o = { 0 }; long _ret = discord_select_option_from_jsmnf(f, js, &o); if (_ret < 0) return _ret; ret += _ret; carray_insert(self, i, o); }
return ret; }
long discord_interaction_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_interaction *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "application_id", sizeof("application_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->application_id);
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "data", sizeof("data") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->data = calloc(1, sizeof *self->data); if (NULL == self->data) return JSMN_ERROR_NOMEM; _ret = discord_interaction_data_from_jsmnf(f, js, self->data); if (_ret < 0) return _ret; ret += sizeof *self->data + _ret; };
    f = jsmnf_find(root, js, "guild_id", sizeof("guild_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->guild_id);
    f = jsmnf_find(root, js, "channel_id", sizeof("channel_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->channel_id);
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_guild_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
    f = jsmnf_find(root, js, "token", sizeof("token") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->token = calloc(1, f->v.len + 1); if (NULL == self->token) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->token, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "version", sizeof("version") - 1); if (f && f->type == JSMN_PRIMITIVE) self->version = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "message", sizeof("message") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->message = calloc(1, sizeof *self->message); if (NULL == self->message) return JSMN_ERROR_NOMEM; _ret = discord_message_from_jsmnf(f, js, self->message); if (_ret < 0) return _ret; ret += sizeof *self->message + _ret; };
    f = jsmnf_find(root, js, "locale", sizeof("locale") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->locale = calloc(1, f->v.len + 1); if (NULL == self->locale) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->locale, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "guild_locale", sizeof("guild_locale") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->guild_locale = calloc(1, f->v.len + 1); if (NULL == self->guild_locale) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->guild_locale, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
static long discord_interaction_data_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_interaction_data *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "resolved", sizeof("resolved") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->resolved = calloc(1, sizeof *self->resolved); if (NULL == self->resolved) return JSMN_ERROR_NOMEM; _ret = discord_resolved_data_from_jsmnf(f, js, self->resolved); if (_ret < 0) return _ret; ret += sizeof *self->resolved + _ret; };
    f = jsmnf_find(root, js, "options", sizeof("options") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->options = calloc(1, sizeof *self->options); if (NULL == self->options) return JSMN_ERROR_NOMEM; _ret = discord_application_command_interaction_data_options_from_jsmnf(f, js, self->options); if (_ret < 0) return _ret; ret += sizeof *self->options + _ret; };
    f = jsmnf_find(root, js, "custom_id", sizeof("custom_id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->custom_id = calloc(1, f->v.len + 1); if (NULL == self->custom_id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->custom_id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "component_type", sizeof("component_type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->component_type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "values", sizeof("values") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->values = calloc(1, sizeof *self->values); if (NULL == self->values) return JSMN_ERROR_NOMEM; _ret = strings_from_jsmnf(f, js, self->values); if (_ret < 0) return _ret; ret += sizeof *self->values + _ret; };
    f = jsmnf_find(root, js, "target_id", sizeof("target_id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->target_id);
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
return ret; }
static long discord_resolved_data_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_resolved_data *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "users", sizeof("users") - 1); if (f) { self->users = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "members", sizeof("members") - 1); if (f) { self->members = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "roles", sizeof("roles") - 1); if (f) { self->roles = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "channels", sizeof("channels") - 1); if (f) { self->channels = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "messages", sizeof("messages") - 1); if (f) { self->messages = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f) { self->attachments = _gc_strndup(js + f->v.pos, f->v.len); ret += f->v.len; };
return ret; }
static long discord_message_interaction_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_message_interaction *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "id", sizeof("id") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->id);
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
    f = jsmnf_find(root, js, "name", sizeof("name") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->name = calloc(1, f->v.len + 1); if (NULL == self->name) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->name, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "user", sizeof("user") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->user = calloc(1, sizeof *self->user); if (NULL == self->user) return JSMN_ERROR_NOMEM; _ret = discord_user_from_jsmnf(f, js, self->user); if (_ret < 0) return _ret; ret += sizeof *self->user + _ret; };
    f = jsmnf_find(root, js, "member", sizeof("member") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->member = calloc(1, sizeof *self->member); if (NULL == self->member) return JSMN_ERROR_NOMEM; _ret = discord_guild_member_from_jsmnf(f, js, self->member); if (_ret < 0) return _ret; ret += sizeof *self->member + _ret; };
return ret; }
long discord_interaction_response_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_interaction_response *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "type", sizeof("type") - 1); if (f && f->type == JSMN_PRIMITIVE) self->type = (int)strtol(js + f->v.pos, NULL, 10);
 
    f = jsmnf_find(root, js, "data", sizeof("data") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->data = calloc(1, sizeof *self->data); if (NULL == self->data) return JSMN_ERROR_NOMEM; _ret = discord_interaction_callback_data_from_jsmnf(f, js, self->data); if (_ret < 0) return _ret; ret += sizeof *self->data + _ret; };
 
return ret; }
static long discord_interaction_callback_data_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_interaction_callback_data *self) { jsmnf_pair *f; long ret = 0;
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "tts", sizeof("tts") - 1); if (f && f->type == JSMN_PRIMITIVE) self->tts = ('t' == js[f->v.pos]);
 
 
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
 
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
 
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
    f = jsmnf_find(root, js, "choices", sizeof("choices") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->choices = calloc(1, sizeof *self->choices); if (NULL == self->choices) return JSMN_ERROR_NOMEM; _ret = discord_application_command_option_choices_from_jsmnf(f, js, self->choices); if (_ret < 0) return _ret; ret += sizeof *self->choices + _ret; };
    f = jsmnf_find(root, js, "custom_id", sizeof("custom_id") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->custom_id = calloc(1, f->v.len + 1); if (NULL == self->custom_id) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->custom_id, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "title", sizeof("title") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->title = calloc(1, f->v.len + 1); if (NULL == self->title) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->title, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
return ret; }
long discord_edit_original_interaction_response_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_edit_original_interaction_response *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
 
    f = jsmnf_find(root, js, "allowed_mentions", sizeof("allowed_mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->allowed_mentions = calloc(1, sizeof *self->allowed_mentions); if (NULL == self->allowed_mentions) return JSMN_ERROR_NOMEM; _ret = discord_allowed_mention_from_jsmnf(f, js, self->allowed_mentions); if (_ret < 0) return _ret; ret += sizeof *self->allowed_mentions + _ret; };
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
return ret; }
long discord_create_followup_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_create_followup_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "avatar_url", sizeof("avatar_url") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->avatar_url = calloc(1, f->v.len + 1); if (NULL == self->avatar_url) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->avatar_url, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
    f = jsmnf_find(root, js, "tts", sizeof("tts") - 1); if (f && f->type == JSMN_PRIMITIVE) self->tts = ('t' == js[f->v.pos]);
 
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
 
    f = jsmnf_find(root, js, "allowed_mentions", sizeof("allowed_mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->allowed_mentions = calloc(1, sizeof *self->allowed_mentions); if (NULL == self->allowed_mentions) return JSMN_ERROR_NOMEM; _ret = discord_allowed_mention_from_jsmnf(f, js, self->allowed_mentions); if (_ret < 0) return _ret; ret += sizeof *self->allowed_mentions + _ret; };
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
 
    f = jsmnf_find(root, js, "flags", sizeof("flags") - 1); if (f) sscanf(js + f->v.pos, "%" SCNu64, &self->flags);
 
return ret; }
long discord_edit_followup_message_from_jsmnf(jsmnf_pair *root, const char *js, struct discord_edit_followup_message *self) { jsmnf_pair *f; long ret = 0;
    f = jsmnf_find(root, js, "content", sizeof("content") - 1); if (f && f->type == JSMN_STRING) { long _ret; self->content = calloc(1, f->v.len + 1); if (NULL == self->content) return JSMN_ERROR_NOMEM; _ret = jsmnf_unescape(self->content, f->v.len, js + f->v.pos, f->v.len); if (_ret < 0) return _ret; ret += _ret; };
 
    f = jsmnf_find(root, js, "embeds", sizeof("embeds") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->embeds = calloc(1, sizeof *self->embeds); if (NULL == self->embeds) return JSMN_ERROR_NOMEM; _ret = discord_embeds_from_jsmnf(f, js, self->embeds); if (_ret < 0) return _ret; ret += sizeof *self->embeds + _ret; };
 
 
    f = jsmnf_find(root, js, "allowed_mentions", sizeof("allowed_mentions") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->allowed_mentions = calloc(1, sizeof *self->allowed_mentions); if (NULL == self->allowed_mentions) return JSMN_ERROR_NOMEM; _ret = discord_allowed_mention_from_jsmnf(f, js, self->allowed_mentions); if (_ret < 0) return _ret; ret += sizeof *self->allowed_mentions + _ret; };
 
 
    f = jsmnf_find(root, js, "components", sizeof("components") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->components = calloc(1, sizeof *self->components); if (NULL == self->components) return JSMN_ERROR_NOMEM; _ret = discord_components_from_jsmnf(f, js, self->components); if (_ret < 0) return _ret; ret += sizeof *self->components + _ret; };
 
 
    f = jsmnf_find(root, js, "attachments", sizeof("attachments") - 1); if (f && (f->type == JSMN_OBJECT || f->type == JSMN_ARRAY)) { long _ret; self->attachments = calloc(1, sizeof *self->attachments); if (NULL == self->attachments) return JSMN_ERROR_NOMEM; _ret = discord_attachments_from_jsmnf(f, js, self->attachments); if (_ret < 0) return _ret; ret += sizeof *self->attachments + _ret; };
 
return ret; }
size_t strings_from_json(const char buf[], size_t size, struct strings *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = strings_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t json_values_from_json(const char buf[], size_t size, struct json_values *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = json_values_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t snowflakes_from_json(const char buf[], size_t size, struct snowflakes *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = snowflakes_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t bitmasks_from_json(const char buf[], size_t size, struct bitmasks *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = bitmasks_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t integers_from_json(const char buf[], size_t size, struct integers *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = integers_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   









size_t discord_application_from_json(const char buf[], size_t size, struct discord_application *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_application_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
 
   
 
   
   
   
   
   

size_t discord_install_params_from_json(const char buf[], size_t size, struct discord_install_params *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_install_params_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_audit_log_from_json(const char buf[], size_t size, struct discord_audit_log *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_audit_log_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
   
   
 
   
 
 
   
 
   


   


   
   
   
   
   
   
   
   


   


   
   
   


   


   
   


 
   
 
 
   
 


   


 
   
 
 
   
 

size_t discord_auto_moderation_rule_from_json(const char buf[], size_t size, struct discord_auto_moderation_rule *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_auto_moderation_rule_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
 
   
 
 
   
 
   
   
   
   
   

size_t discord_auto_moderation_rules_from_json(const char buf[], size_t size, struct discord_auto_moderation_rules *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_auto_moderation_rules_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_create_auto_moderation_rule_from_json(const char buf[], size_t size, struct discord_create_auto_moderation_rule *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_auto_moderation_rule_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 

size_t discord_modify_auto_moderation_rule_from_json(const char buf[], size_t size, struct discord_modify_auto_moderation_rule *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_auto_moderation_rule_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 

size_t discord_invite_from_json(const char buf[], size_t size, struct discord_invite *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_invite_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 
 
   
 
 
   
 

size_t discord_invites_from_json(const char buf[], size_t size, struct discord_invites *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_invites_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   
   
   
 
   
 


 
   
 
   
   
   

size_t discord_get_invite_from_json(const char buf[], size_t size, struct discord_get_invite *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_get_invite_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 










size_t discord_channel_from_json(const char buf[], size_t size, struct discord_channel *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_channel_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_channels_from_json(const char buf[], size_t size, struct discord_channels *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_channels_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_message_from_json(const char buf[], size_t size, struct discord_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_messages_from_json(const char buf[], size_t size, struct discord_messages *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_messages_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   


   
   
   
   

size_t discord_followed_channel_from_json(const char buf[], size_t size, struct discord_followed_channel *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_followed_channel_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   


   
   
   


   


   
   
   
   


   


   
   
   
   
   
   

size_t discord_thread_member_from_json(const char buf[], size_t size, struct discord_thread_member *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_thread_member_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   

size_t discord_thread_members_from_json(const char buf[], size_t size, struct discord_thread_members *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_thread_members_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   

size_t discord_attachments_from_json(const char buf[], size_t size, struct discord_attachments *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_attachments_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_embed_from_json(const char buf[], size_t size, struct discord_embed *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_embeds_from_json(const char buf[], size_t size, struct discord_embeds *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embeds_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_embed_thumbnail_from_json(const char buf[], size_t size, struct discord_embed_thumbnail *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_thumbnail_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
 
   
 

size_t discord_embed_video_from_json(const char buf[], size_t size, struct discord_embed_video *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_video_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_embed_image_from_json(const char buf[], size_t size, struct discord_embed_image *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_image_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
 
   
 

size_t discord_embed_provider_from_json(const char buf[], size_t size, struct discord_embed_provider *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_provider_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 

size_t discord_embed_author_from_json(const char buf[], size_t size, struct discord_embed_author *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_author_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
 
   
 

size_t discord_embed_footer_from_json(const char buf[], size_t size, struct discord_embed_footer *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_footer_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 

size_t discord_embed_field_from_json(const char buf[], size_t size, struct discord_embed_field *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_field_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_embed_fields_from_json(const char buf[], size_t size, struct discord_embed_fields *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_embed_fields_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   
   
   


   
   
   
   

size_t discord_thread_response_body_from_json(const char buf[], size_t size, struct discord_thread_response_body *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_thread_response_body_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_modify_channel_from_json(const char buf[], size_t size, struct discord_modify_channel *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_channel_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
 
   
 
   
   

size_t discord_create_message_from_json(const char buf[], size_t size, struct discord_create_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_edit_message_from_json(const char buf[], size_t size, struct discord_edit_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_edit_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_bulk_delete_messages_from_json(const char buf[], size_t size, struct discord_bulk_delete_messages *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_bulk_delete_messages_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_edit_channel_permissions_from_json(const char buf[], size_t size, struct discord_edit_channel_permissions *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_edit_channel_permissions_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
   

size_t discord_create_channel_invite_from_json(const char buf[], size_t size, struct discord_create_channel_invite *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_channel_invite_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_follow_news_channel_from_json(const char buf[], size_t size, struct discord_follow_news_channel *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_follow_news_channel_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 

size_t discord_group_dm_add_recipient_from_json(const char buf[], size_t size, struct discord_group_dm_add_recipient *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_group_dm_add_recipient_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_start_thread_with_message_from_json(const char buf[], size_t size, struct discord_start_thread_with_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_start_thread_with_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 

size_t discord_start_thread_without_message_from_json(const char buf[], size_t size, struct discord_start_thread_without_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_start_thread_without_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
   
   
 
   
 

size_t discord_list_active_threads_from_json(const char buf[], size_t size, struct discord_list_active_threads *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_list_active_threads_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
   

size_t discord_emoji_from_json(const char buf[], size_t size, struct discord_emoji *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_emoji_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
 
   
 
   
   
   
   

size_t discord_emojis_from_json(const char buf[], size_t size, struct discord_emojis *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_emojis_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_create_guild_emoji_from_json(const char buf[], size_t size, struct discord_create_guild_emoji *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_emoji_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 

size_t discord_modify_guild_emoji_from_json(const char buf[], size_t size, struct discord_modify_guild_emoji *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_emoji_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 





size_t discord_guild_from_json(const char buf[], size_t size, struct discord_guild *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
   

size_t discord_guilds_from_json(const char buf[], size_t size, struct discord_guilds *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guilds_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_guild_preview_from_json(const char buf[], size_t size, struct discord_guild_preview *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_preview_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   

size_t discord_guild_widget_settings_from_json(const char buf[], size_t size, struct discord_guild_widget_settings *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_widget_settings_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_widget_from_json(const char buf[], size_t size, struct discord_guild_widget *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_widget_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   

size_t discord_guild_member_from_json(const char buf[], size_t size, struct discord_guild_member *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_member_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   
   

size_t discord_guild_members_from_json(const char buf[], size_t size, struct discord_guild_members *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_members_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_integration_from_json(const char buf[], size_t size, struct discord_integration *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_integration_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_integrations_from_json(const char buf[], size_t size, struct discord_integrations *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_integrations_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   


   
   
   
   
   
 
   
 

size_t discord_ban_from_json(const char buf[], size_t size, struct discord_ban *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_ban_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_bans_from_json(const char buf[], size_t size, struct discord_bans *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_bans_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_welcome_screen_from_json(const char buf[], size_t size, struct discord_welcome_screen *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_welcome_screen_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 


   
   
   
   


   

size_t discord_prune_count_from_json(const char buf[], size_t size, struct discord_prune_count *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_prune_count_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_create_guild_from_json(const char buf[], size_t size, struct discord_create_guild *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
   
   
   

size_t discord_modify_guild_from_json(const char buf[], size_t size, struct discord_modify_guild *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_create_guild_channel_from_json(const char buf[], size_t size, struct discord_create_guild_channel *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_channel_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
 
   
 
 
   
 
   
   
   
 
   
 
   


   
 
   
 
   
 
   
 

size_t discord_modify_guild_channel_positions_from_json(const char buf[], size_t size, struct discord_modify_guild_channel_positions *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_channel_positions_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_list_active_guild_threads_from_json(const char buf[], size_t size, struct discord_list_active_guild_threads *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_list_active_guild_threads_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_add_guild_member_from_json(const char buf[], size_t size, struct discord_add_guild_member *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_add_guild_member_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   

size_t discord_modify_guild_member_from_json(const char buf[], size_t size, struct discord_modify_guild_member *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_member_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_modify_current_member_from_json(const char buf[], size_t size, struct discord_modify_current_member *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_current_member_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 

size_t discord_modify_current_user_nick_from_json(const char buf[], size_t size, struct discord_modify_current_user_nick *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_current_user_nick_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 

size_t discord_create_guild_ban_from_json(const char buf[], size_t size, struct discord_create_guild_ban *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_ban_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 

size_t discord_create_guild_role_from_json(const char buf[], size_t size, struct discord_create_guild_role *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_role_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   


   
 
   
 

size_t discord_modify_guild_role_positions_from_json(const char buf[], size_t size, struct discord_modify_guild_role_positions *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_role_positions_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_modify_guild_role_from_json(const char buf[], size_t size, struct discord_modify_guild_role *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_role_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   

size_t discord_begin_guild_prune_from_json(const char buf[], size_t size, struct discord_begin_guild_prune *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_begin_guild_prune_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
   
   

size_t discord_modify_guild_welcome_screen_from_json(const char buf[], size_t size, struct discord_modify_guild_welcome_screen *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_welcome_screen_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 

size_t discord_modify_current_user_voice_state_from_json(const char buf[], size_t size, struct discord_modify_current_user_voice_state *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_current_user_voice_state_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 

size_t discord_modify_user_voice_state_from_json(const char buf[], size_t size, struct discord_modify_user_voice_state *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_user_voice_state_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_scheduled_event_from_json(const char buf[], size_t size, struct discord_guild_scheduled_event *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_scheduled_event_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
   


 
   
 

size_t discord_guild_scheduled_events_from_json(const char buf[], size_t size, struct discord_guild_scheduled_events *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_scheduled_events_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
 
   
 
 
   
 

size_t discord_guild_scheduled_event_users_from_json(const char buf[], size_t size, struct discord_guild_scheduled_event_users *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_scheduled_event_users_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_create_guild_scheduled_event_from_json(const char buf[], size_t size, struct discord_create_guild_scheduled_event *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_scheduled_event_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_modify_guild_scheduled_event_from_json(const char buf[], size_t size, struct discord_modify_guild_scheduled_event *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_scheduled_event_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_guild_template_from_json(const char buf[], size_t size, struct discord_guild_template *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_template_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   

size_t discord_guild_templates_from_json(const char buf[], size_t size, struct discord_guild_templates *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_templates_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_create_guild_from_guild_template_from_json(const char buf[], size_t size, struct discord_create_guild_from_guild_template *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_from_guild_template_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 

size_t discord_create_guild_template_from_json(const char buf[], size_t size, struct discord_create_guild_template *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_template_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 

size_t discord_modify_guild_template_from_json(const char buf[], size_t size, struct discord_modify_guild_template *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_template_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 

size_t discord_stage_instance_from_json(const char buf[], size_t size, struct discord_stage_instance *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_stage_instance_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
 
   
 
   


   

size_t discord_create_stage_instance_from_json(const char buf[], size_t size, struct discord_create_stage_instance *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_stage_instance_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 

size_t discord_modify_stage_instance_from_json(const char buf[], size_t size, struct discord_modify_stage_instance *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_stage_instance_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 

size_t discord_sticker_from_json(const char buf[], size_t size, struct discord_sticker *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_sticker_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
   
   
   
 
   
 
 
   
 
   
 
   
 
 
   
 
   

size_t discord_stickers_from_json(const char buf[], size_t size, struct discord_stickers *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_stickers_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   
 
   
 


   


   
 
   
 
   
   
 
   
 
   
 
   
 

size_t discord_sticker_packs_from_json(const char buf[], size_t size, struct discord_sticker_packs *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_sticker_packs_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_list_nitro_sticker_packs_from_json(const char buf[], size_t size, struct discord_list_nitro_sticker_packs *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_list_nitro_sticker_packs_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_modify_guild_sticker_from_json(const char buf[], size_t size, struct discord_modify_guild_sticker *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_guild_sticker_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
















size_t discord_user_from_json(const char buf[], size_t size, struct discord_user *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_user_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_users_from_json(const char buf[], size_t size, struct discord_users *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_users_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   
   
   
 
   
 
   
   
   
   

size_t discord_connections_from_json(const char buf[], size_t size, struct discord_connections *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_connections_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_modify_current_user_from_json(const char buf[], size_t size, struct discord_modify_current_user *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_current_user_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 

size_t discord_create_dm_from_json(const char buf[], size_t size, struct discord_create_dm *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_dm_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 

size_t discord_create_group_dm_from_json(const char buf[], size_t size, struct discord_create_group_dm *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_group_dm_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 

size_t discord_voice_state_from_json(const char buf[], size_t size, struct discord_voice_state *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_voice_state_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   
   
 
   
 

size_t discord_voice_states_from_json(const char buf[], size_t size, struct discord_voice_states *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_voice_states_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   
   
   
   

size_t discord_voice_regions_from_json(const char buf[], size_t size, struct discord_voice_regions *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_voice_regions_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_webhook_from_json(const char buf[], size_t size, struct discord_webhook *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_webhook_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   

size_t discord_webhooks_from_json(const char buf[], size_t size, struct discord_webhooks *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_webhooks_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_create_webhook_from_json(const char buf[], size_t size, struct discord_create_webhook *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_webhook_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 

size_t discord_modify_webhook_from_json(const char buf[], size_t size, struct discord_modify_webhook *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_webhook_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
   

size_t discord_modify_webhook_with_token_from_json(const char buf[], size_t size, struct discord_modify_webhook_with_token *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_modify_webhook_with_token_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 

size_t discord_execute_webhook_from_json(const char buf[], size_t size, struct discord_execute_webhook *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_execute_webhook_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_edit_webhook_message_from_json(const char buf[], size_t size, struct discord_edit_webhook_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_edit_webhook_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
 
   
 
 
   
 






























 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 


   


   
   


   
   
   


   
   


   
   
   
   


   
   
   


   
   


   

size_t discord_presence_update_from_json(const char buf[], size_t size, struct discord_presence_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_presence_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   


   
   
   


   

size_t discord_ready_from_json(const char buf[], size_t size, struct discord_ready *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_ready_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   

size_t discord_auto_moderation_action_execution_from_json(const char buf[], size_t size, struct discord_auto_moderation_action_execution *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_auto_moderation_action_execution_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   

size_t discord_thread_list_sync_from_json(const char buf[], size_t size, struct discord_thread_list_sync *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_thread_list_sync_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   

size_t discord_thread_members_update_from_json(const char buf[], size_t size, struct discord_thread_members_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_thread_members_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   

size_t discord_channel_pins_update_from_json(const char buf[], size_t size, struct discord_channel_pins_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_channel_pins_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_guild_ban_add_from_json(const char buf[], size_t size, struct discord_guild_ban_add *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_ban_add_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_ban_remove_from_json(const char buf[], size_t size, struct discord_guild_ban_remove *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_ban_remove_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_emojis_update_from_json(const char buf[], size_t size, struct discord_guild_emojis_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_emojis_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_stickers_update_from_json(const char buf[], size_t size, struct discord_guild_stickers_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_stickers_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_integrations_update_from_json(const char buf[], size_t size, struct discord_guild_integrations_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_integrations_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_guild_member_remove_from_json(const char buf[], size_t size, struct discord_guild_member_remove *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_member_remove_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_member_update_from_json(const char buf[], size_t size, struct discord_guild_member_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_member_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   

size_t discord_guild_members_chunk_from_json(const char buf[], size_t size, struct discord_guild_members_chunk *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_members_chunk_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   

size_t discord_guild_role_create_from_json(const char buf[], size_t size, struct discord_guild_role_create *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_role_create_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_role_update_from_json(const char buf[], size_t size, struct discord_guild_role_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_role_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_role_delete_from_json(const char buf[], size_t size, struct discord_guild_role_delete *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_role_delete_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_guild_scheduled_event_user_add_from_json(const char buf[], size_t size, struct discord_guild_scheduled_event_user_add *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_scheduled_event_user_add_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_guild_scheduled_event_user_remove_from_json(const char buf[], size_t size, struct discord_guild_scheduled_event_user_remove *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_scheduled_event_user_remove_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_integration_delete_from_json(const char buf[], size_t size, struct discord_integration_delete *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_integration_delete_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_invite_create_from_json(const char buf[], size_t size, struct discord_invite_create *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_invite_create_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_invite_delete_from_json(const char buf[], size_t size, struct discord_invite_delete *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_invite_delete_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_message_delete_from_json(const char buf[], size_t size, struct discord_message_delete *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_message_delete_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_message_delete_bulk_from_json(const char buf[], size_t size, struct discord_message_delete_bulk *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_message_delete_bulk_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_message_reaction_add_from_json(const char buf[], size_t size, struct discord_message_reaction_add *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_message_reaction_add_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   

size_t discord_message_reaction_remove_from_json(const char buf[], size_t size, struct discord_message_reaction_remove *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_message_reaction_remove_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   

size_t discord_message_reaction_remove_all_from_json(const char buf[], size_t size, struct discord_message_reaction_remove_all *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_message_reaction_remove_all_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_message_reaction_remove_emoji_from_json(const char buf[], size_t size, struct discord_message_reaction_remove_emoji *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_message_reaction_remove_emoji_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   

size_t discord_typing_start_from_json(const char buf[], size_t size, struct discord_typing_start *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_typing_start_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   

size_t discord_voice_server_update_from_json(const char buf[], size_t size, struct discord_voice_server_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_voice_server_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_webhooks_update_from_json(const char buf[], size_t size, struct discord_webhooks_update *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_webhooks_update_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   

size_t discord_session_start_limit_from_json(const char buf[], size_t size, struct discord_session_start_limit *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_session_start_limit_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   

size_t discord_auth_response_from_json(const char buf[], size_t size, struct discord_auth_response *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_auth_response_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   










































size_t discord_role_from_json(const char buf[], size_t size, struct discord_role *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_role_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
 
   
 
 
   
 
   
   
   
   
 
   
 

size_t discord_roles_from_json(const char buf[], size_t size, struct discord_roles *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_roles_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


 
   
 
 
   
 
   

size_t discord_team_from_json(const char buf[], size_t size, struct discord_team *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_team_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
   
   


   
 
   
 
   
 
   
 


   




size_t discord_application_command_from_json(const char buf[], size_t size, struct discord_application_command *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_application_command_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_application_commands_from_json(const char buf[], size_t size, struct discord_application_commands *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_application_commands_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   


   
   


   


   
   
 
   
 
 
   
 
   


   


   
   
   
   

size_t discord_guild_application_command_permissions_from_json(const char buf[], size_t size, struct discord_guild_application_command_permissions *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_guild_application_command_permissions_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_application_command_permission_from_json(const char buf[], size_t size, struct discord_application_command_permission *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_application_command_permission_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   

size_t discord_application_command_permissions_from_json(const char buf[], size_t size, struct discord_application_command_permissions *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_application_command_permissions_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_create_global_application_command_from_json(const char buf[], size_t size, struct discord_create_global_application_command *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_global_application_command_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
 
   
 
   
   
 
   
 

size_t discord_edit_global_application_command_from_json(const char buf[], size_t size, struct discord_edit_global_application_command *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_edit_global_application_command_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
 
   
 
   
   

size_t discord_create_guild_application_command_from_json(const char buf[], size_t size, struct discord_create_guild_application_command *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_guild_application_command_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
 
   
 
   
   
 
   
 

size_t discord_edit_guild_application_command_from_json(const char buf[], size_t size, struct discord_edit_guild_application_command *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_edit_guild_application_command_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
 
   
 
   

size_t discord_bulk_overwrite_guild_application_commands_from_json(const char buf[], size_t size, struct discord_bulk_overwrite_guild_application_commands *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_bulk_overwrite_guild_application_commands_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
 
   
 
 
   
 
   
 
   
 

size_t discord_component_from_json(const char buf[], size_t size, struct discord_component *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_component_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
 
   
 
   
   
 
   
 
   
 
   
 
   
 
   
 
   
 
   
 
 
   
 
 
   
 
   
   
   
   

size_t discord_components_from_json(const char buf[], size_t size, struct discord_components *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_components_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   


   
   
   
 
   
 
   

size_t discord_select_options_from_json(const char buf[], size_t size, struct discord_select_options *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_select_options_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   

size_t discord_interaction_from_json(const char buf[], size_t size, struct discord_interaction *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_interaction_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   


   
   
   
   
   

size_t discord_interaction_response_from_json(const char buf[], size_t size, struct discord_interaction_response *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_interaction_response_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   

size_t discord_edit_original_interaction_response_from_json(const char buf[], size_t size, struct discord_edit_original_interaction_response *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_edit_original_interaction_response_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_create_followup_message_from_json(const char buf[], size_t size, struct discord_create_followup_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_create_followup_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_edit_followup_message_from_json(const char buf[], size_t size, struct discord_edit_followup_message *self) { size_t nbytes = 0; jsmn_parser parser; jsmntok_t *tokens = NULL; unsigned tmp = 0; jsmn_init(&parser); if (0 < jsmn_parse_auto(&parser, buf, size, &tokens, &tmp)) { jsmnf_loader loader; jsmnf_pair *pairs = NULL; tmp = 0; jsmnf_init(&loader); if (0 < jsmnf_load_auto(&loader, buf, tokens, parser.toknext, &pairs, &tmp)) { long ret; if (0 < (ret = discord_edit_followup_message_from_jsmnf(pairs, buf, self))) nbytes = ret; free(pairs); } free(tokens); } return nbytes; }
   
 
   
 
 
   
 
 
   
 
 
   
 

jsonbcode strings_to_jsonb(jsonb *b, char buf[], size_t size, const struct strings *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = jsonb_string(b, buf, size, self->array[i], self->array[i] ? strlen(self->array[i]) : 0))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode json_values_to_jsonb(jsonb *b, char buf[], size_t size, const struct json_values *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = jsonb_token(b, buf, size, self->array[i], self->array[i] ? strlen(self->array[i]) : 0))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode snowflakes_to_jsonb(jsonb *b, char buf[], size_t size, const struct snowflakes *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) { char tok[64]; int toklen; toklen = sprintf(tok, "%" PRIu64, self->array[i]); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode bitmasks_to_jsonb(jsonb *b, char buf[], size_t size, const struct bitmasks *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) { char tok[64]; int toklen; toklen = sprintf(tok, "%" PRIu64, self->array[i]); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode integers_to_jsonb(jsonb *b, char buf[], size_t size, const struct integers *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = jsonb_number(b, buf, size, self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }








jsonbcode discord_application_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->rpc_origins != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "rpc_origins", sizeof("rpc_origins") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->rpc_origins))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "bot_public", sizeof("bot_public") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->bot_public))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "bot_require_code_grant", sizeof("bot_require_code_grant") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->bot_require_code_grant))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "terms_of_service_url", sizeof("terms_of_service_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->terms_of_service_url, self->terms_of_service_url ? strlen(self->terms_of_service_url) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "privacy_policy_url", sizeof("privacy_policy_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->privacy_policy_url, self->privacy_policy_url ? strlen(self->privacy_policy_url) : 0))) return code;
  if (self->owner != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "owner", sizeof("owner") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->owner))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "summary", sizeof("summary") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->summary, self->summary ? strlen(self->summary) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "verify_key", sizeof("verify_key") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->verify_key, self->verify_key ? strlen(self->verify_key) : 0))) return code;
  if (self->team != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "team", sizeof("team") - 1))) return code; if (0 > (code = discord_team_to_jsonb(b, buf, size, self->team))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "primary_sku_id", sizeof("primary_sku_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->primary_sku_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "slug", sizeof("slug") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->slug, self->slug ? strlen(self->slug) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "cover_image", sizeof("cover_image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->cover_image, self->cover_image ? strlen(self->cover_image) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_install_params_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_install_params *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "scopes", sizeof("scopes") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->scopes))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_audit_log_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->audit_log_entries != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "audit_log_entries", sizeof("audit_log_entries") - 1))) return code; if (0 > (code = discord_audit_log_entries_to_jsonb(b, buf, size, self->audit_log_entries))) return code;
  }
  if (self->guild_scheduled_events != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_scheduled_events", sizeof("guild_scheduled_events") - 1))) return code; if (0 > (code = discord_guild_scheduled_events_to_jsonb(b, buf, size, self->guild_scheduled_events))) return code;
  }
  if (self->integrations != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "integrations", sizeof("integrations") - 1))) return code; if (0 > (code = discord_integrations_to_jsonb(b, buf, size, self->integrations))) return code;
  }
  if (self->threads != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "threads", sizeof("threads") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->threads))) return code;
  }
  if (self->users != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "users", sizeof("users") - 1))) return code; if (0 > (code = discord_users_to_jsonb(b, buf, size, self->users))) return code;
  }
  if (self->webhooks != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "webhooks", sizeof("webhooks") - 1))) return code; if (0 > (code = discord_webhooks_to_jsonb(b, buf, size, self->webhooks))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_audit_log_entry_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_entry *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "target_id", sizeof("target_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->target_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->changes != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "changes", sizeof("changes") - 1))) return code; if (0 > (code = discord_audit_log_changes_to_jsonb(b, buf, size, self->changes))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "user_id", sizeof("user_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->user_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->action_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "action_type", sizeof("action_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->action_type))) return code;
  }
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_optional_audit_entry_infos_to_jsonb(b, buf, size, self->options))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "reason", sizeof("reason") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->reason, self->reason ? strlen(self->reason) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_audit_log_entries_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_entries *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_audit_log_entry_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_optional_audit_entry_info_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_optional_audit_entry_info *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "count", sizeof("count") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->count, self->count ? strlen(self->count) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "delete_member_days", sizeof("delete_member_days") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->delete_member_days, self->delete_member_days ? strlen(self->delete_member_days) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "members_removed", sizeof("members_removed") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->members_removed, self->members_removed ? strlen(self->members_removed) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "message_id", sizeof("message_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->message_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "role_name", sizeof("role_name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->role_name, self->role_name ? strlen(self->role_name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->type, self->type ? strlen(self->type) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_optional_audit_entry_infos_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_optional_audit_entry_infos *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_optional_audit_entry_info_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_audit_log_change_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_change *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "new_value", sizeof("new_value") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->new_value, self->new_value ? strlen(self->new_value) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "old_value", sizeof("old_value") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->old_value, self->old_value ? strlen(self->old_value) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "key", sizeof("key") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->key, self->key ? strlen(self->key) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_audit_log_changes_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_audit_log_changes *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_audit_log_change_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_auto_moderation_trigger_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_trigger_metadata *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "keyword_filter", sizeof("keyword_filter") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->keyword_filter))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "presets", sizeof("presets") - 1))) return code; if (0 > (code = integers_to_jsonb(b, buf, size, self->presets))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_auto_moderation_action_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_action *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
  if (self->metadata != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "metadata", sizeof("metadata") - 1))) return code; if (0 > (code = discord_auto_moderation_action_metadata_to_jsonb(b, buf, size, self->metadata))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_auto_moderation_actions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_actions *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_auto_moderation_action_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_auto_moderation_action_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auto_moderation_action_metadata *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->duration_seconds != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "duration_seconds", sizeof("duration_seconds") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->duration_seconds))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_auto_moderation_rule_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_auto_moderation_rule *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->event_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "event_type", sizeof("event_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->event_type))) return code;
  }
  if (self->trigger_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "trigger_type", sizeof("trigger_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->trigger_type))) return code;
  }
  if (self->actions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "actions", sizeof("actions") - 1))) return code; if (0 > (code = discord_auto_moderation_actions_to_jsonb(b, buf, size, self->actions))) return code;
  }
  if (self->trigger_metadata != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "trigger_metadata", sizeof("trigger_metadata") - 1))) return code; if (0 > (code = discord_auto_moderation_trigger_metadata_to_jsonb(b, buf, size, self->trigger_metadata))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "enabled", sizeof("enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->enabled))) return code;
  if (self->exempt_roles != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "exempt_roles", sizeof("exempt_roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->exempt_roles))) return code;
  }
  if (self->exempt_channels != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "exempt_channels", sizeof("exempt_channels") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->exempt_channels))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_auto_moderation_rule_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_auto_moderation_rule *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->name != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  }
  if (self->event_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "event_type", sizeof("event_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->event_type))) return code;
  }
  if (self->trigger_metadata != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "trigger_metadata", sizeof("trigger_metadata") - 1))) return code; if (0 > (code = discord_auto_moderation_trigger_metadata_to_jsonb(b, buf, size, self->trigger_metadata))) return code;
  }
  if (self->actions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "actions", sizeof("actions") - 1))) return code; if (0 > (code = discord_auto_moderation_actions_to_jsonb(b, buf, size, self->actions))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "enabled", sizeof("enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->enabled))) return code;
  if (self->exempt_roles != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "exempt_roles", sizeof("exempt_roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->exempt_roles))) return code;
  }
  if (self->exempt_channels != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "exempt_channels", sizeof("exempt_channels") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->exempt_channels))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_invite_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_invite *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "code", sizeof("code") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->code, self->code ? strlen(self->code) : 0))) return code;
  if (self->guild != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild", sizeof("guild") - 1))) return code; if (0 > (code = discord_guild_to_jsonb(b, buf, size, self->guild))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "channel", sizeof("channel") - 1))) return code; if (0 > (code = discord_channel_to_jsonb(b, buf, size, self->channel))) return code;
  if (self->inviter != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "inviter", sizeof("inviter") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->inviter))) return code;
  }
  if (self->target_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "target_type", sizeof("target_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->target_type))) return code;
  }
  if (self->target_user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "target_user", sizeof("target_user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->target_user))) return code;
  }
  if (self->target_application != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "target_application", sizeof("target_application") - 1))) return code; if (0 > (code = discord_application_to_jsonb(b, buf, size, self->target_application))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "approximate_presence_count", sizeof("approximate_presence_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->approximate_presence_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "approximate_member_count", sizeof("approximate_member_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->approximate_member_count))) return code;
  if (self->expires_at != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "expires_at", sizeof("expires_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->expires_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
  if (self->stage_instance != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "stage_instance", sizeof("stage_instance") - 1))) return code; if (0 > (code = discord_invite_stage_instance_to_jsonb(b, buf, size, self->stage_instance))) return code;
  }
  if (self->guild_scheduled_event != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_scheduled_event", sizeof("guild_scheduled_event") - 1))) return code; if (0 > (code = discord_guild_scheduled_event_to_jsonb(b, buf, size, self->guild_scheduled_event))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_invites_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_invites *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_invite_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_invite_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_invite_metadata *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "uses", sizeof("uses") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->uses))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "max_uses", sizeof("max_uses") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_uses))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "max_age", sizeof("max_age") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_age))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "temporary", sizeof("temporary") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->temporary))) return code;
  if (self->created_at != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "created_at", sizeof("created_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->created_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_invite_stage_instance_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_invite_stage_instance *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->members != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = discord_guild_members_to_jsonb(b, buf, size, self->members))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "participant_count", sizeof("participant_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->participant_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "speaker_count", sizeof("speaker_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->speaker_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "topic", sizeof("topic") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->topic, self->topic ? strlen(self->topic) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_get_invite_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_get_invite *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "with_counts", sizeof("with_counts") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->with_counts))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "with_expiration", sizeof("with_expiration") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->with_expiration))) return code;
  if (self->guild_scheduled_event_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_scheduled_event_id", sizeof("guild_scheduled_event_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_scheduled_event_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }









jsonbcode discord_channel_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_channel *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  if (self->guild_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "position", sizeof("position") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->position))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permission_overwrites", sizeof("permission_overwrites") - 1))) return code; if (0 > (code = discord_overwrites_to_jsonb(b, buf, size, self->permission_overwrites))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "topic", sizeof("topic") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->topic, self->topic ? strlen(self->topic) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "nsfw", sizeof("nsfw") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->nsfw))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "last_message_id", sizeof("last_message_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->last_message_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "bitrate", sizeof("bitrate") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->bitrate))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "user_limit", sizeof("user_limit") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->user_limit))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->rate_limit_per_user))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "recipients", sizeof("recipients") - 1))) return code; if (0 > (code = discord_users_to_jsonb(b, buf, size, self->recipients))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "owner_id", sizeof("owner_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->owner_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "parent_id", sizeof("parent_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->parent_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "last_pin_timestamp", sizeof("last_pin_timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->last_pin_timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "rtc_region", sizeof("rtc_region") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->rtc_region, self->rtc_region ? strlen(self->rtc_region) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "voice_quality_mode", sizeof("voice_quality_mode") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->voice_quality_mode))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "message_count", sizeof("message_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->message_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "member_count", sizeof("member_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->member_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "thread_metadata", sizeof("thread_metadata") - 1))) return code; if (0 > (code = discord_thread_metadata_to_jsonb(b, buf, size, self->thread_metadata))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "member", sizeof("member") - 1))) return code; if (0 > (code = discord_thread_member_to_jsonb(b, buf, size, self->member))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "default_auto_archive_duration", sizeof("default_auto_archive_duration") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->default_auto_archive_duration))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_channels_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_channels *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_channel_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "author", sizeof("author") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->author))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "member", sizeof("member") - 1))) return code; if (0 > (code = discord_guild_member_to_jsonb(b, buf, size, self->member))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "timestamp", sizeof("timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  if (self->edited_timestamp != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "edited_timestamp", sizeof("edited_timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->edited_timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
    if (0 > (code = jsonb_key(b, buf, size, "tts", sizeof("tts") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->tts))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mention_everyone", sizeof("mention_everyone") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mention_everyone))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mentions", sizeof("mentions") - 1))) return code; if (0 > (code = discord_users_to_jsonb(b, buf, size, self->mentions))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mention_roles", sizeof("mention_roles") - 1))) return code; if (0 > (code = discord_roles_to_jsonb(b, buf, size, self->mention_roles))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mention_channels", sizeof("mention_channels") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->mention_channels))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "reactions", sizeof("reactions") - 1))) return code; if (0 > (code = discord_reactions_to_jsonb(b, buf, size, self->reactions))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "nonce", sizeof("nonce") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->nonce, self->nonce ? strlen(self->nonce) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "pinned", sizeof("pinned") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->pinned))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "webhook_id", sizeof("webhook_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->webhook_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "activity", sizeof("activity") - 1))) return code; if (0 > (code = discord_message_activity_to_jsonb(b, buf, size, self->activity))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "application", sizeof("application") - 1))) return code; if (0 > (code = discord_application_to_jsonb(b, buf, size, self->application))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "message_reference", sizeof("message_reference") - 1))) return code; if (0 > (code = discord_message_reference_to_jsonb(b, buf, size, self->message_reference))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "referenced_message", sizeof("referenced_message") - 1))) return code; if (0 > (code = discord_message_to_jsonb(b, buf, size, self->referenced_message))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "interaction", sizeof("interaction") - 1))) return code; if (0 > (code = discord_message_interaction_to_jsonb(b, buf, size, self->interaction))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "thread", sizeof("thread") - 1))) return code; if (0 > (code = discord_channel_to_jsonb(b, buf, size, self->thread))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "sticker_items", sizeof("sticker_items") - 1))) return code; if (0 > (code = discord_sticker_items_to_jsonb(b, buf, size, self->sticker_items))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_messages_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_messages *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_message_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_message_activity_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_message_activity *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "party_id", sizeof("party_id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->party_id, self->party_id ? strlen(self->party_id) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_message_reference_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_message_reference *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "message_id", sizeof("message_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->message_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "fail_if_not_exists", sizeof("fail_if_not_exists") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->fail_if_not_exists))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_followed_channel_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_followed_channel *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "webhook_id", sizeof("webhook_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->webhook_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_reaction_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_reaction *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "count", sizeof("count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "me", sizeof("me") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->me))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "emoji", sizeof("emoji") - 1))) return code; if (0 > (code = discord_emoji_to_jsonb(b, buf, size, self->emoji))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_reactions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_reactions *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_reaction_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_overwrite_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_overwrite *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "allow", sizeof("allow") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->allow); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "deny", sizeof("deny") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->deny); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_overwrites_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_overwrites *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_overwrite_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_thread_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_thread_metadata *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "archived", sizeof("archived") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->archived))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "auto_archive_duration", sizeof("auto_archive_duration") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->auto_archive_duration))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "archive_timestamp", sizeof("archive_timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->archive_timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "locked", sizeof("locked") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->locked))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "invitable", sizeof("invitable") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->invitable))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "create_timestamp", sizeof("create_timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->create_timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_thread_member_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_thread_member *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "user_id", sizeof("user_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->user_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "join_timestamp", sizeof("join_timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->join_timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_thread_members_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_thread_members *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_thread_member_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_attachment_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_attachment *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->filename != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "filename", sizeof("filename") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->filename, self->filename ? strlen(self->filename) : 0))) return code;
  }
  if (self->description != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  }
  if (self->content_type != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content_type", sizeof("content_type") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content_type, self->content_type ? strlen(self->content_type) : 0))) return code;
  }
  if (self->size != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "size", sizeof("size") - 1))) return code; { char tok[64]; int toklen; toklen = sprintf(tok, "%zu", self->size); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; };
  }
  if (self->url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  }
  if (self->proxy_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "proxy_url", sizeof("proxy_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->proxy_url, self->proxy_url ? strlen(self->proxy_url) : 0))) return code;
  }
  if (self->height != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "height", sizeof("height") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->height))) return code;
  }
  if (self->width != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "width", sizeof("width") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->width))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "ephemeral", sizeof("ephemeral") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->ephemeral))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_attachments_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_attachments *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_attachment_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "title", sizeof("title") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->title, self->title ? strlen(self->title) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->type, self->type ? strlen(self->type) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  if (self->timestamp != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "timestamp", sizeof("timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
  if (self->color != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "color", sizeof("color") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->color))) return code;
  }
  if (self->footer != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "footer", sizeof("footer") - 1))) return code; if (0 > (code = discord_embed_footer_to_jsonb(b, buf, size, self->footer))) return code;
  }
  if (self->image != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "image", sizeof("image") - 1))) return code; if (0 > (code = discord_embed_image_to_jsonb(b, buf, size, self->image))) return code;
  }
  if (self->thumbnail != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "thumbnail", sizeof("thumbnail") - 1))) return code; if (0 > (code = discord_embed_thumbnail_to_jsonb(b, buf, size, self->thumbnail))) return code;
  }
  if (self->video != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "video", sizeof("video") - 1))) return code; if (0 > (code = discord_embed_video_to_jsonb(b, buf, size, self->video))) return code;
  }
  if (self->provider != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "provider", sizeof("provider") - 1))) return code; if (0 > (code = discord_embed_provider_to_jsonb(b, buf, size, self->provider))) return code;
  }
  if (self->author != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "author", sizeof("author") - 1))) return code; if (0 > (code = discord_embed_author_to_jsonb(b, buf, size, self->author))) return code;
  }
  if (self->fields != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "fields", sizeof("fields") - 1))) return code; if (0 > (code = discord_embed_fields_to_jsonb(b, buf, size, self->fields))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embeds_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embeds *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_embed_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_thumbnail_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_thumbnail *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  if (self->proxy_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "proxy_url", sizeof("proxy_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->proxy_url, self->proxy_url ? strlen(self->proxy_url) : 0))) return code;
  }
  if (self->height != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "height", sizeof("height") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->height))) return code;
  }
  if (self->width != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "width", sizeof("width") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->width))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_video_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_video *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  }
  if (self->proxy_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "proxy_url", sizeof("proxy_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->proxy_url, self->proxy_url ? strlen(self->proxy_url) : 0))) return code;
  }
  if (self->height != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "height", sizeof("height") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->height))) return code;
  }
  if (self->width != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "width", sizeof("width") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->width))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_image_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_image *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  if (self->proxy_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "proxy_url", sizeof("proxy_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->proxy_url, self->proxy_url ? strlen(self->proxy_url) : 0))) return code;
  }
  if (self->height != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "height", sizeof("height") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->height))) return code;
  }
  if (self->width != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "width", sizeof("width") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->width))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_provider_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_provider *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->name != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  }
  if (self->url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_author_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_author *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  }
  if (self->icon_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "icon_url", sizeof("icon_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon_url, self->icon_url ? strlen(self->icon_url) : 0))) return code;
  }
  if (self->proxy_icon_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "proxy_icon_url", sizeof("proxy_icon_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->proxy_icon_url, self->proxy_icon_url ? strlen(self->proxy_icon_url) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_footer_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_footer *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "text", sizeof("text") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->text, self->text ? strlen(self->text) : 0))) return code;
  if (self->icon_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "icon_url", sizeof("icon_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon_url, self->icon_url ? strlen(self->icon_url) : 0))) return code;
  }
  if (self->proxy_icon_url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "proxy_icon_url", sizeof("proxy_icon_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->proxy_icon_url, self->proxy_icon_url ? strlen(self->proxy_icon_url) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_field_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_field *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "value", sizeof("value") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->value, self->value ? strlen(self->value) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "inline", sizeof("inline") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->Inline))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_embed_fields_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_embed_fields *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_embed_field_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_channel_mention_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_channel_mention *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_allowed_mention_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_allowed_mention *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "parse", sizeof("parse") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->parse))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->roles))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "users", sizeof("users") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->users))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "replied_user", sizeof("replied_user") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->replied_user))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_thread_response_body_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_thread_response_body *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "threads", sizeof("threads") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->threads))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = discord_thread_members_to_jsonb(b, buf, size, self->members))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "has_more", sizeof("has_more") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->has_more))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_channel_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_channel *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  if (self->position != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "position", sizeof("position") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->position))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "topic", sizeof("topic") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->topic, self->topic ? strlen(self->topic) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "nsfw", sizeof("nsfw") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->nsfw))) return code;
  if (self->rate_limit_per_user != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->rate_limit_per_user))) return code;
  }
  if (self->user_limit != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "user_limit", sizeof("user_limit") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->user_limit))) return code;
  }
  if (self->permission_overwrites != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "permission_overwrites", sizeof("permission_overwrites") - 1))) return code; if (0 > (code = discord_overwrites_to_jsonb(b, buf, size, self->permission_overwrites))) return code;
  }
  if (self->parent_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "parent_id", sizeof("parent_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->parent_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "rtc_region", sizeof("rtc_region") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->rtc_region, self->rtc_region ? strlen(self->rtc_region) : 0))) return code;
  if (self->video_quality_mode != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "video_quality_mode", sizeof("video_quality_mode") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->video_quality_mode))) return code;
  }
  if (self->default_auto_archive_duration != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "default_auto_archive_duration", sizeof("default_auto_archive_duration") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->default_auto_archive_duration))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "archived", sizeof("archived") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->archived))) return code;
  if (self->auto_archive_duration != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "auto_archive_duration", sizeof("auto_archive_duration") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->auto_archive_duration))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "locked", sizeof("locked") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->locked))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "invitable", sizeof("invitable") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->invitable))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "tts", sizeof("tts") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->tts))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  if (self->allowed_mentions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "allowed_mentions", sizeof("allowed_mentions") - 1))) return code; if (0 > (code = discord_allowed_mention_to_jsonb(b, buf, size, self->allowed_mentions))) return code;
  }
  if (self->message_reference != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "message_reference", sizeof("message_reference") - 1))) return code; if (0 > (code = discord_message_reference_to_jsonb(b, buf, size, self->message_reference))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->sticker_ids != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "sticker_ids", sizeof("sticker_ids") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->sticker_ids))) return code;
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
  if (self->flags != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_edit_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_edit_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  if (self->flags != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->allowed_mentions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "allowed_mentions", sizeof("allowed_mentions") - 1))) return code; if (0 > (code = discord_allowed_mention_to_jsonb(b, buf, size, self->allowed_mentions))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_bulk_delete_messages_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_bulk_delete_messages *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "messages", sizeof("messages") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->messages))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_edit_channel_permissions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_edit_channel_permissions *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->allow != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "allow", sizeof("allow") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->allow); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->deny != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "deny", sizeof("deny") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->deny); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_channel_invite_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_channel_invite *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->max_age != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "max_age", sizeof("max_age") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_age))) return code;
  }
  if (self->max_uses != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "max_uses", sizeof("max_uses") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_uses))) return code;
  }
  if (self->temporary != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "temporary", sizeof("temporary") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->temporary))) return code;
  }
  if (self->unique != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "unique", sizeof("unique") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->unique))) return code;
  }
  if (self->target_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "target_type", sizeof("target_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->target_type))) return code;
  }
  if (self->target_user_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "target_user_id", sizeof("target_user_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->target_user_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->target_application_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "target_application_id", sizeof("target_application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->target_application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_follow_news_channel_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_follow_news_channel *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->webhook_channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "webhook_channel_id", sizeof("webhook_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->webhook_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_group_dm_add_recipient_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_group_dm_add_recipient *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "access_token", sizeof("access_token") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->access_token, self->access_token ? strlen(self->access_token) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "nick", sizeof("nick") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->nick, self->nick ? strlen(self->nick) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_start_thread_with_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_start_thread_with_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->auto_archive_duration != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "auto_archive_duration", sizeof("auto_archive_duration") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->auto_archive_duration))) return code;
  }
  if (self->rate_limit_per_user >= 0 && self->rate_limit_per_user <= 21600) {
    if (0 > (code = jsonb_key(b, buf, size, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->rate_limit_per_user))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_start_thread_without_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_start_thread_without_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->auto_archive_duration != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "auto_archive_duration", sizeof("auto_archive_duration") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->auto_archive_duration))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "invitable", sizeof("invitable") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->invitable))) return code;
  if (self->rate_limit_per_user >= 0 && self->rate_limit_per_user <= 21600) {
    if (0 > (code = jsonb_key(b, buf, size, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->rate_limit_per_user))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_list_active_threads_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_list_active_threads *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->threads != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "threads", sizeof("threads") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->threads))) return code;
  }
  if (self->members != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = discord_thread_members_to_jsonb(b, buf, size, self->members))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "has_more", sizeof("has_more") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->has_more))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_emoji_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_emoji *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->roles != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = discord_roles_to_jsonb(b, buf, size, self->roles))) return code;
  }
  if (self->user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "require_colons", sizeof("require_colons") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->require_colons))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "managed", sizeof("managed") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->managed))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "animated", sizeof("animated") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->animated))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "available", sizeof("available") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->available))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_emojis_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_emojis *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_emoji_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_emoji_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_emoji *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "image", sizeof("image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->image, self->image ? strlen(self->image) : 0))) return code;
  if (self->roles != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->roles))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_emoji_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_emoji *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "image", sizeof("image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->image, self->image ? strlen(self->image) : 0))) return code;
  if (self->roles != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->roles))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }




jsonbcode discord_guild_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
  if (self->icon_hash != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "icon_hash", sizeof("icon_hash") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon_hash, self->icon_hash ? strlen(self->icon_hash) : 0))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "splash", sizeof("splash") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->splash, self->splash ? strlen(self->splash) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "discovery_splash", sizeof("discovery_splash") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->discovery_splash, self->discovery_splash ? strlen(self->discovery_splash) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "owner", sizeof("owner") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->owner))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "owner_id", sizeof("owner_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->owner_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "afk_channel_id", sizeof("afk_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->afk_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "afk_timeout", sizeof("afk_timeout") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->afk_timeout))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "widget_enabled", sizeof("widget_enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->widget_enabled))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "widget_channel_id", sizeof("widget_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->widget_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "verification_level", sizeof("verification_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->verification_level))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "default_message_notifications", sizeof("default_message_notifications") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->default_message_notifications))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "explicit_content_filter", sizeof("explicit_content_filter") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->explicit_content_filter))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = discord_roles_to_jsonb(b, buf, size, self->roles))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "emojis", sizeof("emojis") - 1))) return code; if (0 > (code = discord_emojis_to_jsonb(b, buf, size, self->emojis))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "features", sizeof("features") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->features))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mfa_level", sizeof("mfa_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->mfa_level))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "system_channel_id", sizeof("system_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->system_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "system_channel_flags", sizeof("system_channel_flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->system_channel_flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "rules_channel_id", sizeof("rules_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->rules_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->joined_at != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "joined_at", sizeof("joined_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->joined_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
    if (0 > (code = jsonb_key(b, buf, size, "large", sizeof("large") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->large))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "unavailable", sizeof("unavailable") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->unavailable))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "member_count", sizeof("member_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->member_count))) return code;
  if (self->voice_states != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "voice_states", sizeof("voice_states") - 1))) return code; if (0 > (code = discord_voice_states_to_jsonb(b, buf, size, self->voice_states))) return code;
  }
  if (self->members != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = discord_guild_members_to_jsonb(b, buf, size, self->members))) return code;
  }
  if (self->channels != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channels", sizeof("channels") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->channels))) return code;
  }
  if (self->threads != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "threads", sizeof("threads") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->threads))) return code;
  }
  if (self->presences != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "presences", sizeof("presences") - 1))) return code; if (0 > (code = discord_presence_updates_to_jsonb(b, buf, size, self->presences))) return code;
  }
  if (self->max_presences != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "max_presences", sizeof("max_presences") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_presences))) return code;
  }
  if (self->max_members != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "max_members", sizeof("max_members") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_members))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "vanity_url_code", sizeof("vanity_url_code") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->vanity_url_code, self->vanity_url_code ? strlen(self->vanity_url_code) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "banner", sizeof("banner") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->banner, self->banner ? strlen(self->banner) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "premium_tier", sizeof("premium_tier") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->premium_tier))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "premium_subscription_count", sizeof("premium_subscription_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->premium_subscription_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "preferred_locale", sizeof("preferred_locale") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->preferred_locale, self->preferred_locale ? strlen(self->preferred_locale) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "public_updates_channel_id", sizeof("public_updates_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->public_updates_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->max_video_channel_users != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "max_video_channel_users", sizeof("max_video_channel_users") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_video_channel_users))) return code;
  }
  if (self->approximate_member_count != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "approximate_member_count", sizeof("approximate_member_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->approximate_member_count))) return code;
  }
  if (self->approximate_presence_count != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "approximate_presence_count", sizeof("approximate_presence_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->approximate_presence_count))) return code;
  }
  if (self->welcome_screen != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "welcome_screen", sizeof("welcome_screen") - 1))) return code; if (0 > (code = discord_welcome_screen_to_jsonb(b, buf, size, self->welcome_screen))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "nsfw_level", sizeof("nsfw_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->nsfw_level))) return code;
  if (self->stage_instances != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "stage_instances", sizeof("stage_instances") - 1))) return code; if (0 > (code = discord_stage_instances_to_jsonb(b, buf, size, self->stage_instances))) return code;
  }
  if (self->stickers != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "stickers", sizeof("stickers") - 1))) return code; if (0 > (code = discord_stickers_to_jsonb(b, buf, size, self->stickers))) return code;
  }
  if (self->guild_scheduled_events != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_scheduled_events", sizeof("guild_scheduled_events") - 1))) return code; if (0 > (code = discord_guild_scheduled_events_to_jsonb(b, buf, size, self->guild_scheduled_events))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "premium_progress_bar_enabled", sizeof("premium_progress_bar_enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->premium_progress_bar_enabled))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guilds_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guilds *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_guild_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_preview_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_preview *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "splash", sizeof("splash") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->splash, self->splash ? strlen(self->splash) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "discovery_splash", sizeof("discovery_splash") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->discovery_splash, self->discovery_splash ? strlen(self->discovery_splash) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "emojis", sizeof("emojis") - 1))) return code; if (0 > (code = discord_emojis_to_jsonb(b, buf, size, self->emojis))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "features", sizeof("features") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->features))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "approximate_member_count", sizeof("approximate_member_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->approximate_member_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "approximate_presence_count", sizeof("approximate_presence_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->approximate_presence_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "stickers", sizeof("stickers") - 1))) return code; if (0 > (code = discord_stickers_to_jsonb(b, buf, size, self->stickers))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_widget_settings_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_widget_settings *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "enabled", sizeof("enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->enabled))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_widget_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_widget *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "instant_invite", sizeof("instant_invite") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->instant_invite, self->instant_invite ? strlen(self->instant_invite) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "channels", sizeof("channels") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->channels))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = discord_users_to_jsonb(b, buf, size, self->members))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "presence_count", sizeof("presence_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->presence_count))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_member_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_member *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
  }
  if (self->nick != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "nick", sizeof("nick") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->nick, self->nick ? strlen(self->nick) : 0))) return code;
  }
  if (self->avatar != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "avatar", sizeof("avatar") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar, self->avatar ? strlen(self->avatar) : 0))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->roles))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "joined_at", sizeof("joined_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->joined_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  if (self->premium_since != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "premium_since", sizeof("premium_since") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->premium_since); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
    if (0 > (code = jsonb_key(b, buf, size, "deaf", sizeof("deaf") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->deaf))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "muted", sizeof("muted") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->muted))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "pending", sizeof("pending") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->pending))) return code;
  if (self->permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "communication_disabled_until", sizeof("communication_disabled_until") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->communication_disabled_until); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_members_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_members *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_guild_member_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_integration_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_integration *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->type, self->type ? strlen(self->type) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "enabled", sizeof("enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->enabled))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "syncing", sizeof("syncing") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->syncing))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "role_id", sizeof("role_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->role_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "enable_emoticons", sizeof("enable_emoticons") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->enable_emoticons))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "expire_behavior", sizeof("expire_behavior") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->expire_behavior))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "expire_grace_period", sizeof("expire_grace_period") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->expire_grace_period))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "account", sizeof("account") - 1))) return code; if (0 > (code = discord_integration_account_to_jsonb(b, buf, size, self->account))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "synced_at", sizeof("synced_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->synced_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "subscriber_count", sizeof("subscriber_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->subscriber_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "revoked", sizeof("revoked") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->revoked))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "application", sizeof("application") - 1))) return code; if (0 > (code = discord_integration_application_to_jsonb(b, buf, size, self->application))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_integrations_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_integrations *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_integration_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_integration_account_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_integration_account *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->id, self->id ? strlen(self->id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_integration_application_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_integration_application *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "summary", sizeof("summary") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->summary, self->summary ? strlen(self->summary) : 0))) return code;
  if (self->bot != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "bot", sizeof("bot") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->bot))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_ban_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_ban *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "reason", sizeof("reason") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->reason, self->reason ? strlen(self->reason) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_bans_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_bans *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_ban_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_welcome_screen_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_welcome_screen *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->welcome_channels != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "welcome_channels", sizeof("welcome_channels") - 1))) return code; if (0 > (code = discord_welcome_screen_channels_to_jsonb(b, buf, size, self->welcome_channels))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_welcome_screen_channel_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_welcome_screen_channel *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "emoji_id", sizeof("emoji_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->emoji_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "emoji_name", sizeof("emoji_name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->emoji_name, self->emoji_name ? strlen(self->emoji_name) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_welcome_screen_channels_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_welcome_screen_channels *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_welcome_screen_channel_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_prune_count_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_prune_count *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "pruned", sizeof("pruned") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->pruned))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->region != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "region", sizeof("region") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->region, self->region ? strlen(self->region) : 0))) return code;
  }
  if (self->icon != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "verification_level", sizeof("verification_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->verification_level))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "default_message_notifications", sizeof("default_message_notifications") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->default_message_notifications))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "explicit_content_filter", sizeof("explicit_content_filter") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->explicit_content_filter))) return code;
  if (self->roles != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = discord_roles_to_jsonb(b, buf, size, self->roles))) return code;
  }
  if (self->channels != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channels", sizeof("channels") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->channels))) return code;
  }
  if (self->afk_channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "afk_channel_id", sizeof("afk_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->afk_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "afk_timeout", sizeof("afk_timeout") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->afk_timeout))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "system_channel_id", sizeof("system_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->system_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "system_channel_flags", sizeof("system_channel_flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->system_channel_flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "verification_level", sizeof("verification_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->verification_level))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "default_message_notifications", sizeof("default_message_notifications") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->default_message_notifications))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "explicit_content_filter", sizeof("explicit_content_filter") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->explicit_content_filter))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "afk_channel_id", sizeof("afk_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->afk_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "afk_timeout", sizeof("afk_timeout") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->afk_timeout))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "owner_id", sizeof("owner_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->owner_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "splash", sizeof("splash") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->splash, self->splash ? strlen(self->splash) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "discovery_splash", sizeof("discovery_splash") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->discovery_splash, self->discovery_splash ? strlen(self->discovery_splash) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "banner", sizeof("banner") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->banner, self->banner ? strlen(self->banner) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "system_channel_id", sizeof("system_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->system_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "system_channel_flags", sizeof("system_channel_flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->system_channel_flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "rules_channel_id", sizeof("rules_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->rules_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "public_updates_channel_id", sizeof("public_updates_channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->public_updates_channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "preferred_locale", sizeof("preferred_locale") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->preferred_locale, self->preferred_locale ? strlen(self->preferred_locale) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "features", sizeof("features") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->features))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "premium_progress_bar_enabled", sizeof("premium_progress_bar_enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->premium_progress_bar_enabled))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_channel_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_channel *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "topic", sizeof("topic") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->topic, self->topic ? strlen(self->topic) : 0))) return code;
  if (self->bitrate != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "bitrate", sizeof("bitrate") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->bitrate))) return code;
  }
  if (self->user_limit != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "user_limit", sizeof("user_limit") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->user_limit))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "rate_limit_per_user", sizeof("rate_limit_per_user") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->rate_limit_per_user))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "position", sizeof("position") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->position))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permission_overwrites", sizeof("permission_overwrites") - 1))) return code; if (0 > (code = discord_overwrites_to_jsonb(b, buf, size, self->permission_overwrites))) return code;
  if (self->parent_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "parent_id", sizeof("parent_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->parent_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "nsfw", sizeof("nsfw") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->nsfw))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_modify_guild_channel_position_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_channel_position *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->position != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "position", sizeof("position") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->position))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "lock_category", sizeof("lock_category") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->lock_category))) return code;
  if (self->parent_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "parent_id", sizeof("parent_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->parent_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_channel_positions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_channel_positions *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_modify_guild_channel_position_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_list_active_guild_threads_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_list_active_guild_threads *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "threads", sizeof("threads") - 1))) return code; if (0 > (code = discord_channels_to_jsonb(b, buf, size, self->threads))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = discord_thread_members_to_jsonb(b, buf, size, self->members))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_add_guild_member_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_add_guild_member *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "access_token", sizeof("access_token") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->access_token, self->access_token ? strlen(self->access_token) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "nick", sizeof("nick") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->nick, self->nick ? strlen(self->nick) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->roles))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mute", sizeof("mute") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mute))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "deaf", sizeof("deaf") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->deaf))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_member_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_member *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->nick != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "nick", sizeof("nick") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->nick, self->nick ? strlen(self->nick) : 0))) return code;
  }
  if (self->roles != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->roles))) return code;
  }
  if (self->channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "mute", sizeof("mute") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mute))) return code;
  }
  if (self->channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "deaf", sizeof("deaf") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->deaf))) return code;
  }
  if (self->channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->communication_disabled_until != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "communication_disabled_until", sizeof("communication_disabled_until") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->communication_disabled_until); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_current_member_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_current_member *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->nick != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "nick", sizeof("nick") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->nick, self->nick ? strlen(self->nick) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_current_user_nick_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_current_user_nick *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->nick != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "nick", sizeof("nick") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->nick, self->nick ? strlen(self->nick) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_ban_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_ban *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->delete_message_days >= 0 && self->delete_message_days <= 7) {
    if (0 > (code = jsonb_key(b, buf, size, "delete_message_days", sizeof("delete_message_days") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->delete_message_days))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_role_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_role *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "color", sizeof("color") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->color))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "hoist", sizeof("hoist") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->hoist))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "unicode_emoji", sizeof("unicode_emoji") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->unicode_emoji, self->unicode_emoji ? strlen(self->unicode_emoji) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mentionable", sizeof("mentionable") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mentionable))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_modify_guild_role_position_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_role_position *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->position != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "position", sizeof("position") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->position))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_role_positions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_role_positions *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_modify_guild_role_position_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_role_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_role *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "color", sizeof("color") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->color))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "hoist", sizeof("hoist") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->hoist))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "unicode_emoji", sizeof("unicode_emoji") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->unicode_emoji, self->unicode_emoji ? strlen(self->unicode_emoji) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mentionable", sizeof("mentionable") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mentionable))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_begin_guild_prune_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_begin_guild_prune *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->days != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "days", sizeof("days") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->days))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "compute_prune_count", sizeof("compute_prune_count") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->compute_prune_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "include_roles", sizeof("include_roles") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->include_roles))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_welcome_screen_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_welcome_screen *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "enabled", sizeof("enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->enabled))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "welcome_channels", sizeof("welcome_channels") - 1))) return code; if (0 > (code = discord_welcome_screen_channels_to_jsonb(b, buf, size, self->welcome_channels))) return code;
  if (self->description != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_current_user_voice_state_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_current_user_voice_state *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "suppress", sizeof("suppress") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->suppress))) return code;
  if (self->request_to_speak_timestamp != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "request_to_speak_timestamp", sizeof("request_to_speak_timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->request_to_speak_timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_user_voice_state_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_user_voice_state *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "suppress", sizeof("suppress") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->suppress))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_scheduled_event_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_scheduled_event *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "creator_id", sizeof("creator_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->creator_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "scheduled_start_time", sizeof("scheduled_start_time") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->scheduled_start_time); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "scheduled_end_time", sizeof("scheduled_end_time") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->scheduled_end_time); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  if (self->privacy_level != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "privacy_level", sizeof("privacy_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->privacy_level))) return code;
  }
  if (self->status != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "status", sizeof("status") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->status))) return code;
  }
  if (self->entity_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "entity_type", sizeof("entity_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->entity_type))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "entity_id", sizeof("entity_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->entity_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->entity_metadata != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "entity_metadata", sizeof("entity_metadata") - 1))) return code; if (0 > (code = discord_guild_scheduled_event_entity_metadata_to_jsonb(b, buf, size, self->entity_metadata))) return code;
  }
  if (self->creator != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "creator", sizeof("creator") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->creator))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "user_count", sizeof("user_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->user_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "image", sizeof("image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->image, self->image ? strlen(self->image) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_guild_scheduled_event_entity_metadata_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_scheduled_event_entity_metadata *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->location != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "location", sizeof("location") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->location, self->location ? strlen(self->location) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_scheduled_events_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_scheduled_events *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_guild_scheduled_event_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_guild_scheduled_event_user_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_scheduled_event_user *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_scheduled_event_id", sizeof("guild_scheduled_event_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_scheduled_event_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
  }
  if (self->member != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "member", sizeof("member") - 1))) return code; if (0 > (code = discord_guild_member_to_jsonb(b, buf, size, self->member))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_scheduled_event_users_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_scheduled_event_users *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_guild_scheduled_event_user_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_scheduled_event_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_scheduled_event *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->entity_metadata != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "entity_metadata", sizeof("entity_metadata") - 1))) return code; if (0 > (code = discord_guild_scheduled_event_entity_metadata_to_jsonb(b, buf, size, self->entity_metadata))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->privacy_level != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "privacy_level", sizeof("privacy_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->privacy_level))) return code;
  }
  if (self->scheduled_start_time != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "scheduled_start_time", sizeof("scheduled_start_time") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->scheduled_start_time); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
  if (self->scheduled_end_time != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "scheduled_end_time", sizeof("scheduled_end_time") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->scheduled_end_time); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
  if (self->description != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  }
  if (self->entity_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "entity_type", sizeof("entity_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->entity_type))) return code;
  }
  if (self->image != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "image", sizeof("image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->image, self->image ? strlen(self->image) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_scheduled_event_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_scheduled_event *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->channel_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->entity_metadata != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "entity_metadata", sizeof("entity_metadata") - 1))) return code; if (0 > (code = discord_guild_scheduled_event_entity_metadata_to_jsonb(b, buf, size, self->entity_metadata))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->scheduled_start_time != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "scheduled_start_time", sizeof("scheduled_start_time") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->scheduled_start_time); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
  if (self->scheduled_end_time != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "scheduled_end_time", sizeof("scheduled_end_time") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->scheduled_end_time); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
  if (self->description != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  }
  if (self->entity_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "entity_type", sizeof("entity_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->entity_type))) return code;
  }
  if (self->status != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "status", sizeof("status") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->status))) return code;
  }
  if (self->image != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "image", sizeof("image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->image, self->image ? strlen(self->image) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_template_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_template *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "code", sizeof("code") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->code, self->code ? strlen(self->code) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "usage_count", sizeof("usage_count") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->usage_count))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "creator_id", sizeof("creator_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->creator_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "creator", sizeof("creator") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->creator))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "created_at", sizeof("created_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->created_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "updated_at", sizeof("updated_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->updated_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "source_guild_id", sizeof("source_guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->source_guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "serialized_source_guild", sizeof("serialized_source_guild") - 1))) return code; if (0 > (code = discord_guild_to_jsonb(b, buf, size, self->serialized_source_guild))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "is_dirty", sizeof("is_dirty") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->is_dirty))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_templates_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_templates *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_guild_template_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_from_guild_template_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_from_guild_template *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->icon != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_template_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_template *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->description != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_template_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_template *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->name != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  }
  if (self->description != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_stage_instance_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_stage_instance *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "topic", sizeof("topic") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->topic, self->topic ? strlen(self->topic) : 0))) return code;
  if (self->privacy_level != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "privacy_level", sizeof("privacy_level") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->privacy_level))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "discoverable_disabled", sizeof("discoverable_disabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->discoverable_disabled))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_stage_instances_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_stage_instances *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_stage_instance_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_sticker_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->pack_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "pack_id", sizeof("pack_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->pack_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "tags", sizeof("tags") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->tags, self->tags ? strlen(self->tags) : 0))) return code;
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
  if (self->format_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "format_type", sizeof("format_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->format_type))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "available", sizeof("available") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->available))) return code;
  if (self->guild_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "sort_value", sizeof("sort_value") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->sort_value))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_stickers_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_stickers *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_sticker_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_sticker_item_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker_item *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->format_type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "format_type", sizeof("format_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->format_type))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_sticker_items_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker_items *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_sticker_item_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_sticker_pack_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker_pack *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->stickers != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "stickers", sizeof("stickers") - 1))) return code; if (0 > (code = discord_stickers_to_jsonb(b, buf, size, self->stickers))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "sku_id", sizeof("sku_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->sku_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->cover_sticker_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "cover_sticker_id", sizeof("cover_sticker_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->cover_sticker_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->banner_asset_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "banner_asset_id", sizeof("banner_asset_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->banner_asset_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_sticker_packs_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_sticker_packs *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_sticker_pack_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_guild_sticker_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_guild_sticker *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "tags", sizeof("tags") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->tags, self->tags ? strlen(self->tags) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }















jsonbcode discord_user_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_user *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "username", sizeof("username") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->username, self->username ? strlen(self->username) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "discriminator", sizeof("discriminator") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->discriminator, self->discriminator ? strlen(self->discriminator) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "avatar", sizeof("avatar") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar, self->avatar ? strlen(self->avatar) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "bot", sizeof("bot") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->bot))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "system", sizeof("system") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->System))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mfa_enabled", sizeof("mfa_enabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mfa_enabled))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "banner", sizeof("banner") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->banner, self->banner ? strlen(self->banner) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "accent_color", sizeof("accent_color") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->accent_color))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "locale", sizeof("locale") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->locale, self->locale ? strlen(self->locale) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "verified", sizeof("verified") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->verified))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "email", sizeof("email") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->email, self->email ? strlen(self->email) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "premium_type", sizeof("premium_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->premium_type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "public_flags", sizeof("public_flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->public_flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_users_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_users *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_user_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_connection_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_connection *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->type, self->type ? strlen(self->type) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "revoked", sizeof("revoked") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->revoked))) return code;
  if (self->integrations != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "integrations", sizeof("integrations") - 1))) return code; if (0 > (code = discord_integrations_to_jsonb(b, buf, size, self->integrations))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "verified", sizeof("verified") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->verified))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "friend_sync", sizeof("friend_sync") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->friend_sync))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "show_activity", sizeof("show_activity") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->show_activity))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "visibility", sizeof("visibility") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->visibility))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_connections_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_connections *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_connection_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_current_user_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_current_user *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->username != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "username", sizeof("username") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->username, self->username ? strlen(self->username) : 0))) return code;
  }
  if (self->avatar != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "avatar", sizeof("avatar") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar, self->avatar ? strlen(self->avatar) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_dm_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_dm *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->recipient_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "recipient_id", sizeof("recipient_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->recipient_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_group_dm_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_group_dm *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->access_tokens != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "access_tokens", sizeof("access_tokens") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->access_tokens))) return code;
  }
  if (self->nicks != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "nicks", sizeof("nicks") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->nicks))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_voice_state_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_voice_state *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "user_id", sizeof("user_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->user_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "member", sizeof("member") - 1))) return code; if (0 > (code = discord_guild_member_to_jsonb(b, buf, size, self->member))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "session_id", sizeof("session_id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->session_id, self->session_id ? strlen(self->session_id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "deaf", sizeof("deaf") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->deaf))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mute", sizeof("mute") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mute))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "self_deaf", sizeof("self_deaf") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->self_deaf))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "self_mute", sizeof("self_mute") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->self_mute))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "self_stream", sizeof("self_stream") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->self_stream))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "self_video", sizeof("self_video") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->self_video))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "suppress", sizeof("suppress") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->suppress))) return code;
  if (self->request_to_speak_timestamp) {
    if (0 > (code = jsonb_key(b, buf, size, "request_to_speak_timestamp", sizeof("request_to_speak_timestamp") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->request_to_speak_timestamp); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_voice_states_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_voice_states *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_voice_state_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_voice_region_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_voice_region *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->id, self->id ? strlen(self->id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "optimal", sizeof("optimal") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->optimal))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "deprecated", sizeof("deprecated") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->deprecated))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "custom", sizeof("custom") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->custom))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_voice_regions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_voice_regions *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_voice_region_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_webhook_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_webhook *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "token", sizeof("token") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->token, self->token ? strlen(self->token) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->source_channel != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "source_channel", sizeof("source_channel") - 1))) return code; if (0 > (code = discord_channel_to_jsonb(b, buf, size, self->source_channel))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_webhooks_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_webhooks *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_webhook_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_webhook_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_webhook *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->avatar != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "avatar", sizeof("avatar") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar, self->avatar ? strlen(self->avatar) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_webhook_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_webhook *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->avatar != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "avatar", sizeof("avatar") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar, self->avatar ? strlen(self->avatar) : 0))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_modify_webhook_with_token_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_modify_webhook_with_token *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  if (self->avatar != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "avatar", sizeof("avatar") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar, self->avatar ? strlen(self->avatar) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_execute_webhook_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_execute_webhook *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "username", sizeof("username") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->username, self->username ? strlen(self->username) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "avatar_url", sizeof("avatar_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar_url, self->avatar_url ? strlen(self->avatar_url) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "tts", sizeof("tts") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->tts))) return code;
  if (self->embeds != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  }
  if (self->allowed_mentions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "allowed_mentions", sizeof("allowed_mentions") - 1))) return code; if (0 > (code = discord_allowed_mention_to_jsonb(b, buf, size, self->allowed_mentions))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
  if (self->flags != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_edit_webhook_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_edit_webhook_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
  if (self->embeds != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  }
  if (self->allowed_mentions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "allowed_mentions", sizeof("allowed_mentions") - 1))) return code; if (0 > (code = discord_allowed_mention_to_jsonb(b, buf, size, self->allowed_mentions))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }




























static jsonbcode discord_activity_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->name != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  if (self->type == 1 && self->url != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  }
  if (self->created_at != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "created_at", sizeof("created_at") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->created_at); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
  if (self->timestamps != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "timestamps", sizeof("timestamps") - 1))) return code; if (0 > (code = discord_activity_timestamps_to_jsonb(b, buf, size, self->timestamps))) return code;
  }
  if (self->application_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->details != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "details", sizeof("details") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->details, self->details ? strlen(self->details) : 0))) return code;
  }
  if (self->state != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "state", sizeof("state") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->state, self->state ? strlen(self->state) : 0))) return code;
  }
  if (self->emoji != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "emoji", sizeof("emoji") - 1))) return code; if (0 > (code = discord_activity_emoji_to_jsonb(b, buf, size, self->emoji))) return code;
  }
  if (self->party != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "party", sizeof("party") - 1))) return code; if (0 > (code = discord_activity_party_to_jsonb(b, buf, size, self->party))) return code;
  }
  if (self->assets != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "assets", sizeof("assets") - 1))) return code; if (0 > (code = discord_activity_assets_to_jsonb(b, buf, size, self->assets))) return code;
  }
  if (self->secrets != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "secrets", sizeof("secrets") - 1))) return code; if (0 > (code = discord_activity_secrets_to_jsonb(b, buf, size, self->secrets))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "instance", sizeof("instance") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->instance))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->buttons != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "buttons", sizeof("buttons") - 1))) return code; if (0 > (code = discord_activity_buttons_to_jsonb(b, buf, size, self->buttons))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activities_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activities *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_activity_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activity_timestamps_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_timestamps *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "start", sizeof("start") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->start); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "end", sizeof("end") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->end); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activity_emoji_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_emoji *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "animated", sizeof("animated") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->animated))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activity_party_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_party *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->id, self->id ? strlen(self->id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "size", sizeof("size") - 1))) return code; if (0 > (code = integers_to_jsonb(b, buf, size, self->size))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activity_assets_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_assets *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "large_image", sizeof("large_image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->large_image, self->large_image ? strlen(self->large_image) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "large_text", sizeof("large_text") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->large_text, self->large_text ? strlen(self->large_text) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "small_image", sizeof("small_image") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->small_image, self->small_image ? strlen(self->small_image) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "small_text", sizeof("small_text") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->small_text, self->small_text ? strlen(self->small_text) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activity_secrets_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_secrets *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "join", sizeof("join") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->join, self->join ? strlen(self->join) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "spectate", sizeof("spectate") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->spectate, self->spectate ? strlen(self->spectate) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "match", sizeof("match") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->match, self->match ? strlen(self->match) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activity_button_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_button *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "label", sizeof("label") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->label, self->label ? strlen(self->label) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_activity_buttons_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_activity_buttons *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_activity_button_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_presence_update_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_presence_update *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
  }
  if (self->guild_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->status != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "status", sizeof("status") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->status, self->status ? strlen(self->status) : 0))) return code;
  }
  if (self->client_status != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "client_status", sizeof("client_status") - 1))) return code; if (0 > (code = discord_client_status_to_jsonb(b, buf, size, self->client_status))) return code;
  }
  if (self->activities != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "activities", sizeof("activities") - 1))) return code; if (0 > (code = discord_activities_to_jsonb(b, buf, size, self->activities))) return code;
  }
  if (self->since != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "since", sizeof("since") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->since); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
  }
    if (0 > (code = jsonb_key(b, buf, size, "afk", sizeof("afk") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->afk))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_client_status_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_client_status *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "desktop", sizeof("desktop") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->desktop, self->desktop ? strlen(self->desktop) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mobile", sizeof("mobile") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->mobile, self->mobile ? strlen(self->mobile) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "web", sizeof("web") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->web, self->web ? strlen(self->web) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_presence_updates_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_presence_updates *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_presence_update_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_identify_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_identify *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "token", sizeof("token") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->token, self->token ? strlen(self->token) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "properties", sizeof("properties") - 1))) return code; if (0 > (code = discord_identify_connection_to_jsonb(b, buf, size, self->properties))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "compress", sizeof("compress") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->compress))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "large_threshold", sizeof("large_threshold") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->large_threshold))) return code;
  if (self->shard != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "shard", sizeof("shard") - 1))) return code; if (0 > (code = integers_to_jsonb(b, buf, size, self->shard))) return code;
  }
  if (self->presence != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "presence", sizeof("presence") - 1))) return code; if (0 > (code = discord_presence_update_to_jsonb(b, buf, size, self->presence))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "intents", sizeof("intents") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->intents); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_identify_connection_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_identify_connection *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "os", sizeof("os") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->os, self->os ? strlen(self->os) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "browser", sizeof("browser") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->browser, self->browser ? strlen(self->browser) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "device", sizeof("device") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->device, self->device ? strlen(self->device) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_resume_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_resume *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "token", sizeof("token") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->token, self->token ? strlen(self->token) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "session_id", sizeof("session_id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->session_id, self->session_id ? strlen(self->session_id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "seq", sizeof("seq") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->seq))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_request_guild_members_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_request_guild_members *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "query", sizeof("query") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->query, self->query ? strlen(self->query) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "limit", sizeof("limit") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->limit))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "presences", sizeof("presences") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->presences))) return code;
  if (self->user_ids != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user_ids", sizeof("user_ids") - 1))) return code; if (0 > (code = snowflakes_to_jsonb(b, buf, size, self->user_ids))) return code;
  }
  if (self->nonce != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "nonce", sizeof("nonce") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->nonce, self->nonce ? strlen(self->nonce) : 0))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_update_voice_state_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_update_voice_state *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "self_mute", sizeof("self_mute") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->self_mute))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "self_deaf", sizeof("self_deaf") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->self_deaf))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_auth_response_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_auth_response *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "application", sizeof("application") - 1))) return code; if (0 > (code = discord_application_to_jsonb(b, buf, size, self->application))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "scopes", sizeof("scopes") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->scopes))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "expires", sizeof("expires") - 1))) return code; { char tok[64]; int toklen; toklen = cog_unix_ms_to_iso8601(tok, sizeof(tok), self->expires); if (0 > (code = jsonb_string(b, buf, size, tok, toklen))) return code; };
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }









































jsonbcode discord_role_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_role *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "color", sizeof("color") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->color))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "hoist", sizeof("hoist") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->hoist))) return code;
  if (self->icon != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
  }
  if (self->unicode_emoji != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "unicode_emoji", sizeof("unicode_emoji") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->unicode_emoji, self->unicode_emoji ? strlen(self->unicode_emoji) : 0))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "position", sizeof("position") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->position))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "managed", sizeof("managed") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->managed))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "mentionable", sizeof("mentionable") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->mentionable))) return code;
  if (self->tags != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "tags", sizeof("tags") - 1))) return code; if (0 > (code = discord_role_tag_to_jsonb(b, buf, size, self->tags))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_roles_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_roles *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_role_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_role_tag_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_role_tag *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->bot_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "bot_id", sizeof("bot_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->bot_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->integration_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "integration_id", sizeof("integration_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->integration_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "premium_subscribe", sizeof("premium_subscribe") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->premium_subscribe))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_team_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_team *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "icon", sizeof("icon") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->icon, self->icon ? strlen(self->icon) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->members != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = discord_team_members_to_jsonb(b, buf, size, self->members))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "owner_user_id", sizeof("owner_user_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->owner_user_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_team_member_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_team_member *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "membership_state", sizeof("membership_state") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->membership_state))) return code;
  if (self->permissions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; if (0 > (code = bitmasks_to_jsonb(b, buf, size, self->permissions))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "team_id", sizeof("team_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->team_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  if (self->user != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_team_members_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_team_members *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_team_member_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }



jsonbcode discord_application_command_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
  if (self->application_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->guild_id != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->name != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
  }
  if (self->description != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  }
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_options_to_jsonb(b, buf, size, self->options))) return code;
  }
  if (self->default_member_permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "default_member_permissions", sizeof("default_member_permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->default_member_permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->dm_permission != false) {
    if (0 > (code = jsonb_key(b, buf, size, "dm_permission", sizeof("dm_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->dm_permission))) return code;
  }
  if (self->default_permission != true) {
    if (0 > (code = jsonb_key(b, buf, size, "default_permission", sizeof("default_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->default_permission))) return code;
  }
  if (self->version != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "version", sizeof("version") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->version); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_application_commands_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_commands *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_application_command_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_application_command_option_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_option *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->required != false) {
    if (0 > (code = jsonb_key(b, buf, size, "required", sizeof("required") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->required))) return code;
  }
  if (self->choices != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "choices", sizeof("choices") - 1))) return code; if (0 > (code = discord_application_command_option_choices_to_jsonb(b, buf, size, self->choices))) return code;
  }
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_options_to_jsonb(b, buf, size, self->options))) return code;
  }
  if (self->channel_types != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "channel_types", sizeof("channel_types") - 1))) return code; if (0 > (code = integers_to_jsonb(b, buf, size, self->channel_types))) return code;
  }
  if (self->min_value != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "min_value", sizeof("min_value") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->min_value, self->min_value ? strlen(self->min_value) : 0))) return code;
  }
  if (self->max_value != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "max_value", sizeof("max_value") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->max_value, self->max_value ? strlen(self->max_value) : 0))) return code;
  }
  if (self->choices == NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "autocomplete", sizeof("autocomplete") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->autocomplete))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_application_command_options_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_options *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_application_command_option_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_application_command_option_choice_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_option_choice *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "value", sizeof("value") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->value, self->value ? strlen(self->value) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_application_command_option_choices_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_option_choices *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_application_command_option_choice_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_application_command_interaction_data_option_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_interaction_data_option *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  if (self->value != NULL && *self->value != '\0') {
    if (0 > (code = jsonb_key(b, buf, size, "value", sizeof("value") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->value, self->value ? strlen(self->value) : 0))) return code;
  }
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_interaction_data_options_to_jsonb(b, buf, size, self->options))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "focused", sizeof("focused") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->focused))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_application_command_interaction_data_options_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_interaction_data_options *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_application_command_interaction_data_option_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_guild_application_command_permission_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_application_command_permission *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "permissions", sizeof("permissions") - 1))) return code; if (0 > (code = discord_application_command_permissions_to_jsonb(b, buf, size, self->permissions))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_guild_application_command_permissions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_guild_application_command_permissions *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_guild_application_command_permission_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_application_command_permission_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_permission *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "permission", sizeof("permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->permission))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_application_command_permissions_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_application_command_permissions *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_application_command_permission_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_global_application_command_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_global_application_command *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_options_to_jsonb(b, buf, size, self->options))) return code;
  }
  if (self->default_member_permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "default_member_permissions", sizeof("default_member_permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->default_member_permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "dm_permission", sizeof("dm_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->dm_permission))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "default_permission", sizeof("default_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->default_permission))) return code;
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_edit_global_application_command_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_edit_global_application_command *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_options_to_jsonb(b, buf, size, self->options))) return code;
  }
  if (self->default_member_permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "default_member_permissions", sizeof("default_member_permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->default_member_permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "dm_permission", sizeof("dm_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->dm_permission))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "default_permission", sizeof("default_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->default_permission))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_guild_application_command_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_guild_application_command *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_options_to_jsonb(b, buf, size, self->options))) return code;
  }
  if (self->default_member_permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "default_member_permissions", sizeof("default_member_permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->default_member_permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "dm_permission", sizeof("dm_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->dm_permission))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "default_permission", sizeof("default_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->default_permission))) return code;
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_edit_guild_application_command_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_edit_guild_application_command *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_options_to_jsonb(b, buf, size, self->options))) return code;
  }
  if (self->default_member_permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "default_member_permissions", sizeof("default_member_permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->default_member_permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "default_permission", sizeof("default_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->default_permission))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_bulk_overwrite_guild_application_commands_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_bulk_overwrite_guild_application_commands *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name_localizations", sizeof("name_localizations") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->name_localizations))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description_localizations", sizeof("description_localizations") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->description_localizations))) return code;
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_options_to_jsonb(b, buf, size, self->options))) return code;
  }
  if (self->default_member_permissions != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "default_member_permissions", sizeof("default_member_permissions") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->default_member_permissions); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
    if (0 > (code = jsonb_key(b, buf, size, "dm_permission", sizeof("dm_permission") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->dm_permission))) return code;
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_component_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_component *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->type != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "custom_id", sizeof("custom_id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->custom_id, self->custom_id ? strlen(self->custom_id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "disabled", sizeof("disabled") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->disabled))) return code;
  if (self->style != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "style", sizeof("style") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->style))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "label", sizeof("label") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->label, self->label ? strlen(self->label) : 0))) return code;
  if (self->emoji != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "emoji", sizeof("emoji") - 1))) return code; if (0 > (code = discord_emoji_to_jsonb(b, buf, size, self->emoji))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "url", sizeof("url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->url, self->url ? strlen(self->url) : 0))) return code;
  if (self->options != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_select_options_to_jsonb(b, buf, size, self->options))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "placeholder", sizeof("placeholder") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->placeholder, self->placeholder ? strlen(self->placeholder) : 0))) return code;
  if (self->min_values >= 0 && self->max_values <= 25) {
    if (0 > (code = jsonb_key(b, buf, size, "min_values", sizeof("min_values") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->min_values))) return code;
  }
  if (self->max_values <= 25) {
    if (0 > (code = jsonb_key(b, buf, size, "max_values", sizeof("max_values") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_values))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "min_length", sizeof("min_length") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->min_length))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "max_length", sizeof("max_length") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->max_length))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "required", sizeof("required") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->required))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "value", sizeof("value") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->value, self->value ? strlen(self->value) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_components_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_components *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_component_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_select_option_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_select_option *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "label", sizeof("label") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->label, self->label ? strlen(self->label) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "value", sizeof("value") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->value, self->value ? strlen(self->value) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "description", sizeof("description") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->description, self->description ? strlen(self->description) : 0))) return code;
  if (self->emoji != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "emoji", sizeof("emoji") - 1))) return code; if (0 > (code = discord_emoji_to_jsonb(b, buf, size, self->emoji))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "default", sizeof("default") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->Default))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_select_options_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_select_options *self) { jsonbcode code; if (0 > (code = jsonb_array(b, buf, size))) return code; if (self != NULL) { int i;
    for (i = 0; i < self->size; ++i) if (0 > (code = discord_select_option_to_jsonb(b, buf, size, &self->array[i]))) return code;
} if (0 > (code = jsonb_array_pop(b, buf, size))) return code; return code; }
jsonbcode discord_interaction_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_interaction *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "application_id", sizeof("application_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->application_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "data", sizeof("data") - 1))) return code; if (0 > (code = discord_interaction_data_to_jsonb(b, buf, size, self->data))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "guild_id", sizeof("guild_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->guild_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "channel_id", sizeof("channel_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->channel_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "member", sizeof("member") - 1))) return code; if (0 > (code = discord_guild_member_to_jsonb(b, buf, size, self->member))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "token", sizeof("token") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->token, self->token ? strlen(self->token) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "version", sizeof("version") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->version))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "message", sizeof("message") - 1))) return code; if (0 > (code = discord_message_to_jsonb(b, buf, size, self->message))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "locale", sizeof("locale") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->locale, self->locale ? strlen(self->locale) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "guild_locale", sizeof("guild_locale") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->guild_locale, self->guild_locale ? strlen(self->guild_locale) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_interaction_data_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_interaction_data *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "resolved", sizeof("resolved") - 1))) return code; if (0 > (code = discord_resolved_data_to_jsonb(b, buf, size, self->resolved))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "options", sizeof("options") - 1))) return code; if (0 > (code = discord_application_command_interaction_data_options_to_jsonb(b, buf, size, self->options))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "custom_id", sizeof("custom_id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->custom_id, self->custom_id ? strlen(self->custom_id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "component_type", sizeof("component_type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->component_type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "values", sizeof("values") - 1))) return code; if (0 > (code = strings_to_jsonb(b, buf, size, self->values))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "target_id", sizeof("target_id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->target_id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_resolved_data_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_resolved_data *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "users", sizeof("users") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->users, self->users ? strlen(self->users) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "members", sizeof("members") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->members, self->members ? strlen(self->members) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "roles", sizeof("roles") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->roles, self->roles ? strlen(self->roles) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "channels", sizeof("channels") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->channels, self->channels ? strlen(self->channels) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "messages", sizeof("messages") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->messages, self->messages ? strlen(self->messages) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = jsonb_token(b, buf, size, self->attachments, self->attachments ? strlen(self->attachments) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_message_interaction_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_message_interaction *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "id", sizeof("id") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->id); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "name", sizeof("name") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->name, self->name ? strlen(self->name) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "user", sizeof("user") - 1))) return code; if (0 > (code = discord_user_to_jsonb(b, buf, size, self->user))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "member", sizeof("member") - 1))) return code; if (0 > (code = discord_guild_member_to_jsonb(b, buf, size, self->member))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_interaction_response_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_interaction_response *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "type", sizeof("type") - 1))) return code; if (0 > (code = jsonb_number(b, buf, size, self->type))) return code;
  if (self->data != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "data", sizeof("data") - 1))) return code; if (0 > (code = discord_interaction_callback_data_to_jsonb(b, buf, size, self->data))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
static jsonbcode discord_interaction_callback_data_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_interaction_callback_data *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->tts != false) {
    if (0 > (code = jsonb_key(b, buf, size, "tts", sizeof("tts") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->tts))) return code;
  }
  if (self->content != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
  }
  if (self->embeds != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  }
  if (self->flags != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
    if (0 > (code = jsonb_key(b, buf, size, "choices", sizeof("choices") - 1))) return code; if (0 > (code = discord_application_command_option_choices_to_jsonb(b, buf, size, self->choices))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "custom_id", sizeof("custom_id") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->custom_id, self->custom_id ? strlen(self->custom_id) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "title", sizeof("title") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->title, self->title ? strlen(self->title) : 0))) return code;
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_edit_original_interaction_response_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_edit_original_interaction_response *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
  if (self->embeds != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  }
  if (self->allowed_mentions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "allowed_mentions", sizeof("allowed_mentions") - 1))) return code; if (0 > (code = discord_allowed_mention_to_jsonb(b, buf, size, self->allowed_mentions))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_create_followup_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_create_followup_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "avatar_url", sizeof("avatar_url") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->avatar_url, self->avatar_url ? strlen(self->avatar_url) : 0))) return code;
    if (0 > (code = jsonb_key(b, buf, size, "tts", sizeof("tts") - 1))) return code; if (0 > (code = jsonb_bool(b, buf, size, self->tts))) return code;
  if (self->embeds != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  }
  if (self->allowed_mentions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "allowed_mentions", sizeof("allowed_mentions") - 1))) return code; if (0 > (code = discord_allowed_mention_to_jsonb(b, buf, size, self->allowed_mentions))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
  if (self->flags != 0) {
    if (0 > (code = jsonb_key(b, buf, size, "flags", sizeof("flags") - 1))) return code; else { char tok[64]; int toklen; toklen = sprintf(tok, "\"%" PRIu64 "\"", self->flags); if (0 > (code = jsonb_token(b, buf, size, tok, toklen))) return code; }
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
jsonbcode discord_edit_followup_message_to_jsonb(jsonb *b, char buf[], size_t size, const struct discord_edit_followup_message *self) { jsonbcode code; if (0 > (code = jsonb_object(b, buf, size))) return code; if (self != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "content", sizeof("content") - 1))) return code; if (0 > (code = jsonb_string(b, buf, size, self->content, self->content ? strlen(self->content) : 0))) return code;
  if (self->embeds != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "embeds", sizeof("embeds") - 1))) return code; if (0 > (code = discord_embeds_to_jsonb(b, buf, size, self->embeds))) return code;
  }
  if (self->allowed_mentions != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "allowed_mentions", sizeof("allowed_mentions") - 1))) return code; if (0 > (code = discord_allowed_mention_to_jsonb(b, buf, size, self->allowed_mentions))) return code;
  }
  if (self->components != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "components", sizeof("components") - 1))) return code; if (0 > (code = discord_components_to_jsonb(b, buf, size, self->components))) return code;
  }
  if (self->attachments != NULL) {
    if (0 > (code = jsonb_key(b, buf, size, "attachments", sizeof("attachments") - 1))) return code; if (0 > (code = discord_attachments_to_jsonb(b, buf, size, self->attachments))) return code;
  }
} if (0 > (code = jsonb_object_pop(b, buf, size))) return code; return code; }
size_t strings_to_json(char buf[], size_t size, const struct strings *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = strings_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t json_values_to_json(char buf[], size_t size, const struct json_values *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = json_values_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t snowflakes_to_json(char buf[], size_t size, const struct snowflakes *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = snowflakes_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t bitmasks_to_json(char buf[], size_t size, const struct bitmasks *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = bitmasks_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t integers_to_json(char buf[], size_t size, const struct integers *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = integers_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   









size_t discord_application_to_json(char buf[], size_t size, const struct discord_application *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_application_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
 
   
 
   
   
   
   
   

size_t discord_install_params_to_json(char buf[], size_t size, const struct discord_install_params *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_install_params_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   

size_t discord_audit_log_to_json(char buf[], size_t size, const struct discord_audit_log *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_audit_log_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   
 
   
 
   
   
 
   
 
 
   
 
   


   


   
   
   
   
   
   
   
   


   


   
   
   


   


   
   


 
   
 
 
   
 


   


 
   
 
 
   
 

size_t discord_create_auto_moderation_rule_to_json(char buf[], size_t size, const struct discord_create_auto_moderation_rule *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_auto_moderation_rule_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 

size_t discord_modify_auto_moderation_rule_to_json(char buf[], size_t size, const struct discord_modify_auto_moderation_rule *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_auto_moderation_rule_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 

size_t discord_invite_to_json(char buf[], size_t size, const struct discord_invite *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_invite_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 
 
   
 
 
   
 

size_t discord_invites_to_json(char buf[], size_t size, const struct discord_invites *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_invites_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   
   
   
 
   
 


 
   
 
   
   
   

size_t discord_get_invite_to_json(char buf[], size_t size, const struct discord_get_invite *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_get_invite_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 










size_t discord_channel_to_json(char buf[], size_t size, const struct discord_channel *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_channel_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_channels_to_json(char buf[], size_t size, const struct discord_channels *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_channels_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_message_to_json(char buf[], size_t size, const struct discord_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_messages_to_json(char buf[], size_t size, const struct discord_messages *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_messages_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   


   
   
   
   

size_t discord_followed_channel_to_json(char buf[], size_t size, const struct discord_followed_channel *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_followed_channel_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   


   
   
   


   


   
   
   
   


   


   
   
   
   
   
   

size_t discord_thread_member_to_json(char buf[], size_t size, const struct discord_thread_member *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_thread_member_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   

size_t discord_thread_members_to_json(char buf[], size_t size, const struct discord_thread_members *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_thread_members_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   

size_t discord_attachments_to_json(char buf[], size_t size, const struct discord_attachments *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_attachments_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_embed_to_json(char buf[], size_t size, const struct discord_embed *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_embeds_to_json(char buf[], size_t size, const struct discord_embeds *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embeds_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_embed_thumbnail_to_json(char buf[], size_t size, const struct discord_embed_thumbnail *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_thumbnail_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
 
   
 

size_t discord_embed_video_to_json(char buf[], size_t size, const struct discord_embed_video *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_video_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_embed_image_to_json(char buf[], size_t size, const struct discord_embed_image *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_image_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
 
   
 

size_t discord_embed_provider_to_json(char buf[], size_t size, const struct discord_embed_provider *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_provider_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 

size_t discord_embed_author_to_json(char buf[], size_t size, const struct discord_embed_author *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_author_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
 
   
 

size_t discord_embed_footer_to_json(char buf[], size_t size, const struct discord_embed_footer *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_footer_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 

size_t discord_embed_field_to_json(char buf[], size_t size, const struct discord_embed_field *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_field_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   

size_t discord_embed_fields_to_json(char buf[], size_t size, const struct discord_embed_fields *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_embed_fields_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   
   
   


   
   
   
   

size_t discord_thread_response_body_to_json(char buf[], size_t size, const struct discord_thread_response_body *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_thread_response_body_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   

size_t discord_modify_channel_to_json(char buf[], size_t size, const struct discord_modify_channel *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_channel_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
 
   
 
   
   

size_t discord_create_message_to_json(char buf[], size_t size, const struct discord_create_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_edit_message_to_json(char buf[], size_t size, const struct discord_edit_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_edit_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_bulk_delete_messages_to_json(char buf[], size_t size, const struct discord_bulk_delete_messages *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_bulk_delete_messages_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_edit_channel_permissions_to_json(char buf[], size_t size, const struct discord_edit_channel_permissions *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_edit_channel_permissions_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
   

size_t discord_create_channel_invite_to_json(char buf[], size_t size, const struct discord_create_channel_invite *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_channel_invite_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_follow_news_channel_to_json(char buf[], size_t size, const struct discord_follow_news_channel *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_follow_news_channel_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 

size_t discord_group_dm_add_recipient_to_json(char buf[], size_t size, const struct discord_group_dm_add_recipient *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_group_dm_add_recipient_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   

size_t discord_start_thread_with_message_to_json(char buf[], size_t size, const struct discord_start_thread_with_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_start_thread_with_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 

size_t discord_start_thread_without_message_to_json(char buf[], size_t size, const struct discord_start_thread_without_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_start_thread_without_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
   
   
 
   
 

size_t discord_list_active_threads_to_json(char buf[], size_t size, const struct discord_list_active_threads *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_list_active_threads_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
   

size_t discord_emoji_to_json(char buf[], size_t size, const struct discord_emoji *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_emoji_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
 
   
 
   
   
   
   

size_t discord_emojis_to_json(char buf[], size_t size, const struct discord_emojis *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_emojis_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_create_guild_emoji_to_json(char buf[], size_t size, const struct discord_create_guild_emoji *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_emoji_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 

size_t discord_modify_guild_emoji_to_json(char buf[], size_t size, const struct discord_modify_guild_emoji *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_emoji_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 





size_t discord_guild_to_json(char buf[], size_t size, const struct discord_guild *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
 
   
 
   
   
   
   
 
   
 
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
   

size_t discord_guilds_to_json(char buf[], size_t size, const struct discord_guilds *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guilds_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_guild_preview_to_json(char buf[], size_t size, const struct discord_guild_preview *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_preview_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
   
   
   

size_t discord_guild_widget_settings_to_json(char buf[], size_t size, const struct discord_guild_widget_settings *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_widget_settings_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   

size_t discord_guild_widget_to_json(char buf[], size_t size, const struct discord_guild_widget *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_widget_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   

size_t discord_guild_member_to_json(char buf[], size_t size, const struct discord_guild_member *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_member_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   
   

size_t discord_guild_members_to_json(char buf[], size_t size, const struct discord_guild_members *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_members_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_integration_to_json(char buf[], size_t size, const struct discord_integration *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_integration_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_integrations_to_json(char buf[], size_t size, const struct discord_integrations *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_integrations_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   


   
   
   
   
   
 
   
 

size_t discord_ban_to_json(char buf[], size_t size, const struct discord_ban *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_ban_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   

size_t discord_bans_to_json(char buf[], size_t size, const struct discord_bans *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_bans_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_welcome_screen_to_json(char buf[], size_t size, const struct discord_welcome_screen *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_welcome_screen_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 


   
   
   
   


   

size_t discord_prune_count_to_json(char buf[], size_t size, const struct discord_prune_count *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_prune_count_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_create_guild_to_json(char buf[], size_t size, const struct discord_create_guild *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
   
   
   
 
   
 
 
   
 
 
   
 
   
   
   

size_t discord_modify_guild_to_json(char buf[], size_t size, const struct discord_modify_guild *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_create_guild_channel_to_json(char buf[], size_t size, const struct discord_create_guild_channel *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_channel_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
 
   
 
 
   
 
   
   
   
 
   
 
   


   
 
   
 
   
 
   
 

size_t discord_modify_guild_channel_positions_to_json(char buf[], size_t size, const struct discord_modify_guild_channel_positions *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_channel_positions_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_list_active_guild_threads_to_json(char buf[], size_t size, const struct discord_list_active_guild_threads *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_list_active_guild_threads_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   

size_t discord_add_guild_member_to_json(char buf[], size_t size, const struct discord_add_guild_member *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_add_guild_member_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   

size_t discord_modify_guild_member_to_json(char buf[], size_t size, const struct discord_modify_guild_member *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_member_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_modify_current_member_to_json(char buf[], size_t size, const struct discord_modify_current_member *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_current_member_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 

size_t discord_modify_current_user_nick_to_json(char buf[], size_t size, const struct discord_modify_current_user_nick *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_current_user_nick_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 

size_t discord_create_guild_ban_to_json(char buf[], size_t size, const struct discord_create_guild_ban *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_ban_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 

size_t discord_create_guild_role_to_json(char buf[], size_t size, const struct discord_create_guild_role *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_role_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   


   
 
   
 

size_t discord_modify_guild_role_positions_to_json(char buf[], size_t size, const struct discord_modify_guild_role_positions *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_role_positions_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_modify_guild_role_to_json(char buf[], size_t size, const struct discord_modify_guild_role *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_role_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   

size_t discord_begin_guild_prune_to_json(char buf[], size_t size, const struct discord_begin_guild_prune *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_begin_guild_prune_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
   
   

size_t discord_modify_guild_welcome_screen_to_json(char buf[], size_t size, const struct discord_modify_guild_welcome_screen *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_welcome_screen_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 

size_t discord_modify_current_user_voice_state_to_json(char buf[], size_t size, const struct discord_modify_current_user_voice_state *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_current_user_voice_state_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 

size_t discord_modify_user_voice_state_to_json(char buf[], size_t size, const struct discord_modify_user_voice_state *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_user_voice_state_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   

size_t discord_guild_scheduled_event_to_json(char buf[], size_t size, const struct discord_guild_scheduled_event *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_scheduled_event_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
 
   
 
 
   
 
 
   
 
   
 
   
 
 
   
 
   
   


 
   
 

size_t discord_guild_scheduled_events_to_json(char buf[], size_t size, const struct discord_guild_scheduled_events *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_scheduled_events_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
 
   
 
 
   
 

size_t discord_guild_scheduled_event_users_to_json(char buf[], size_t size, const struct discord_guild_scheduled_event_users *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_scheduled_event_users_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_create_guild_scheduled_event_to_json(char buf[], size_t size, const struct discord_create_guild_scheduled_event *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_scheduled_event_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_modify_guild_scheduled_event_to_json(char buf[], size_t size, const struct discord_modify_guild_scheduled_event *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_scheduled_event_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_guild_template_to_json(char buf[], size_t size, const struct discord_guild_template *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_template_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
   
   
   

size_t discord_guild_templates_to_json(char buf[], size_t size, const struct discord_guild_templates *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_templates_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_create_guild_from_guild_template_to_json(char buf[], size_t size, const struct discord_create_guild_from_guild_template *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_from_guild_template_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 

size_t discord_create_guild_template_to_json(char buf[], size_t size, const struct discord_create_guild_template *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_template_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 

size_t discord_modify_guild_template_to_json(char buf[], size_t size, const struct discord_modify_guild_template *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_template_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 

size_t discord_stage_instance_to_json(char buf[], size_t size, const struct discord_stage_instance *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_stage_instance_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
 
   
 
   


   

size_t discord_sticker_to_json(char buf[], size_t size, const struct discord_sticker *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_sticker_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
   
   
   
 
   
 
 
   
 
   
 
   
 
 
   
 
   

size_t discord_stickers_to_json(char buf[], size_t size, const struct discord_stickers *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_stickers_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   
 
   
 


   


   
 
   
 
   
   
 
   
 
   
 
   
 

size_t discord_sticker_packs_to_json(char buf[], size_t size, const struct discord_sticker_packs *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_sticker_packs_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_modify_guild_sticker_to_json(char buf[], size_t size, const struct discord_modify_guild_sticker *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_guild_sticker_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
















size_t discord_user_to_json(char buf[], size_t size, const struct discord_user *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_user_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

size_t discord_users_to_json(char buf[], size_t size, const struct discord_users *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_users_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   
   
   
 
   
 
   
   
   
   

size_t discord_connections_to_json(char buf[], size_t size, const struct discord_connections *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_connections_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_modify_current_user_to_json(char buf[], size_t size, const struct discord_modify_current_user *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_current_user_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 

size_t discord_create_dm_to_json(char buf[], size_t size, const struct discord_create_dm *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_dm_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 

size_t discord_create_group_dm_to_json(char buf[], size_t size, const struct discord_create_group_dm *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_group_dm_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 

size_t discord_voice_state_to_json(char buf[], size_t size, const struct discord_voice_state *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_voice_state_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
   
   
   
   
 
   
 

size_t discord_voice_states_to_json(char buf[], size_t size, const struct discord_voice_states *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_voice_states_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   
   
   
   

size_t discord_voice_regions_to_json(char buf[], size_t size, const struct discord_voice_regions *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_voice_regions_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_webhook_to_json(char buf[], size_t size, const struct discord_webhook *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_webhook_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
   
   
 
   
 
   
   
   
 
   
 
   

size_t discord_webhooks_to_json(char buf[], size_t size, const struct discord_webhooks *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_webhooks_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_create_webhook_to_json(char buf[], size_t size, const struct discord_create_webhook *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_webhook_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 

size_t discord_modify_webhook_to_json(char buf[], size_t size, const struct discord_modify_webhook *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_webhook_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
   

size_t discord_modify_webhook_with_token_to_json(char buf[], size_t size, const struct discord_modify_webhook_with_token *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_modify_webhook_with_token_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 

size_t discord_execute_webhook_to_json(char buf[], size_t size, const struct discord_execute_webhook *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_execute_webhook_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_edit_webhook_message_to_json(char buf[], size_t size, const struct discord_edit_webhook_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_edit_webhook_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
 
   
 
 
   
 






























 
   
 
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
 
   
 


   


   
   


   
   
   


   
   


   
   
   
   


   
   
   


   
   


   

size_t discord_presence_update_to_json(char buf[], size_t size, const struct discord_presence_update *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_presence_update_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   


   
   
   


   

size_t discord_identify_to_json(char buf[], size_t size, const struct discord_identify *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_identify_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
 
   
 
 
   
 
   


   
   
   

size_t discord_resume_to_json(char buf[], size_t size, const struct discord_resume *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_resume_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   

size_t discord_request_guild_members_to_json(char buf[], size_t size, const struct discord_request_guild_members *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_request_guild_members_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
 
   
 
 
   
 

size_t discord_update_voice_state_to_json(char buf[], size_t size, const struct discord_update_voice_state *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_update_voice_state_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   

size_t discord_auth_response_to_json(char buf[], size_t size, const struct discord_auth_response *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_auth_response_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   










































size_t discord_role_to_json(char buf[], size_t size, const struct discord_role *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_role_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
 
   
 
 
   
 
   
   
   
   
 
   
 

size_t discord_roles_to_json(char buf[], size_t size, const struct discord_roles *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_roles_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


 
   
 
 
   
 
   

size_t discord_team_to_json(char buf[], size_t size, const struct discord_team *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_team_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
   
   


   
 
   
 
   
 
   
 


   




size_t discord_application_command_to_json(char buf[], size_t size, const struct discord_application_command *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_application_command_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_application_commands_to_json(char buf[], size_t size, const struct discord_application_commands *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_application_commands_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 


   


   
   


   


   
   
 
   
 
 
   
 
   


   


   
   
   
   

size_t discord_guild_application_command_permissions_to_json(char buf[], size_t size, const struct discord_guild_application_command_permissions *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_guild_application_command_permissions_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_application_command_permission_to_json(char buf[], size_t size, const struct discord_application_command_permission *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_application_command_permission_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   

size_t discord_application_command_permissions_to_json(char buf[], size_t size, const struct discord_application_command_permissions *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_application_command_permissions_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_create_global_application_command_to_json(char buf[], size_t size, const struct discord_create_global_application_command *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_global_application_command_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
 
   
 
   
   
 
   
 

size_t discord_edit_global_application_command_to_json(char buf[], size_t size, const struct discord_edit_global_application_command *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_edit_global_application_command_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
 
   
 
   
   

size_t discord_create_guild_application_command_to_json(char buf[], size_t size, const struct discord_create_guild_application_command *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_guild_application_command_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
 
   
 
   
   
 
   
 

size_t discord_edit_guild_application_command_to_json(char buf[], size_t size, const struct discord_edit_guild_application_command *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_edit_guild_application_command_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
 
   
 
   

size_t discord_bulk_overwrite_guild_application_commands_to_json(char buf[], size_t size, const struct discord_bulk_overwrite_guild_application_commands *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_bulk_overwrite_guild_application_commands_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
 
   
 
 
   
 
   
 
   
 

size_t discord_component_to_json(char buf[], size_t size, const struct discord_component *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_component_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
 
   
 
   
   
 
   
 
   
 
   
 
   
 
   
 
   
 
   
 
 
   
 
 
   
 
   
   
   
   

size_t discord_components_to_json(char buf[], size_t size, const struct discord_components *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_components_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   


   
   
   
 
   
 
   

size_t discord_select_options_to_json(char buf[], size_t size, const struct discord_select_options *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_select_options_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   

size_t discord_interaction_to_json(char buf[], size_t size, const struct discord_interaction *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_interaction_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
   
   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   
   
   
   
   


   
   
   
   
   
   


   
   
   
   
   

size_t discord_interaction_response_to_json(char buf[], size_t size, const struct discord_interaction_response *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_interaction_response_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 


 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 
   
   
   

size_t discord_edit_original_interaction_response_to_json(char buf[], size_t size, const struct discord_edit_original_interaction_response *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_edit_original_interaction_response_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_create_followup_message_to_json(char buf[], size_t size, const struct discord_create_followup_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_create_followup_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
   
 
   
 
 
   
 
 
   
 
 
   
 
 
   
 

size_t discord_edit_followup_message_to_json(char buf[], size_t size, const struct discord_edit_followup_message *self) { jsonb b; jsonbcode code; jsonb_init(&b); code = discord_edit_followup_message_to_jsonb(&b, buf, size, self); return code < 0 ? 0 : b.pos; }
   
 
   
 
 
   
 
 
   
 
 
   
 

