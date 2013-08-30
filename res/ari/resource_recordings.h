/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/ari/resource_recordings.c
 *
 * Recording resources
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/ari_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_RECORDINGS_H
#define _ASTERISK_RESOURCE_RECORDINGS_H

#include "asterisk/ari.h"

/*! \brief Argument struct for ast_ari_get_stored_recordings() */
struct ast_get_stored_recordings_args {
};
/*!
 * \brief List recordings that are complete.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_get_stored_recordings(struct ast_variable *headers, struct ast_get_stored_recordings_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_get_stored_recording() */
struct ast_get_stored_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Get a stored recording's details.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_get_stored_recording(struct ast_variable *headers, struct ast_get_stored_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_delete_stored_recording() */
struct ast_delete_stored_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Delete a stored recording.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_delete_stored_recording(struct ast_variable *headers, struct ast_delete_stored_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_get_live_recording() */
struct ast_get_live_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief List live recordings.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_get_live_recording(struct ast_variable *headers, struct ast_get_live_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_cancel_recording() */
struct ast_cancel_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Stop a live recording and discard it.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_cancel_recording(struct ast_variable *headers, struct ast_cancel_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_stop_recording() */
struct ast_stop_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Stop a live recording and store it.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_stop_recording(struct ast_variable *headers, struct ast_stop_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_pause_recording() */
struct ast_pause_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Pause a live recording.
 *
 * Pausing a recording suspends silence detection, which will be restarted when the recording is unpaused. Paused time is not included in the accounting for maxDurationSeconds.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_pause_recording(struct ast_variable *headers, struct ast_pause_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_unpause_recording() */
struct ast_unpause_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Unpause a live recording.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_unpause_recording(struct ast_variable *headers, struct ast_unpause_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_mute_recording() */
struct ast_mute_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Mute a live recording.
 *
 * Muting a recording suspends silence detection, which will be restarted when the recording is unmuted.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_mute_recording(struct ast_variable *headers, struct ast_mute_recording_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_unmute_recording() */
struct ast_unmute_recording_args {
	/*! \brief The name of the recording */
	const char *recording_name;
};
/*!
 * \brief Unmute a live recording.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_unmute_recording(struct ast_variable *headers, struct ast_unmute_recording_args *args, struct ast_ari_response *response);

#endif /* _ASTERISK_RESOURCE_RECORDINGS_H */
