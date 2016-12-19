#import <Foundation/Foundation.h>
#import "SWGCommentResource.h"
#import "SWGContributionResource.h"
#import "SWGDispositionResource.h"
#import "SWGFlagResource.h"
#import "SWGPageCommentResource_.h"
#import "SWGPageDispositionResource_.h"
#import "SWGPageVideoRelationshipResource_.h"
#import "SWGPageVideoResource_.h"
#import "SWGVideoRelationshipResource.h"
#import "SWGVideoResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGMediaVideosApi: NSObject <SWGApi>

extern NSString* kSWGMediaVideosApiErrorDomain;
extern NSInteger kSWGMediaVideosApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Add a new video comment
/// 
///
/// @param videoId The video id 
/// @param commentResource The comment object (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGCommentResource*
-(NSNumber*) addCommentUsingPOST1WithVideoId: (NSNumber*) videoId
    commentResource: (SWGCommentResource*) commentResource
    completionHandler: (void (^)(SWGCommentResource* output, NSError* error)) handler;


/// Adds a contributor to a video
/// 
///
/// @param videoId The video id
/// @param contributionResource The contribution object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) addContributorUsingPOSTWithVideoId: (NSNumber*) videoId
    contributionResource: (SWGContributionResource*) contributionResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Add a new Video disposition
/// 
///
/// @param videoId The video id
/// @param dispositionResource The disposition object (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGDispositionResource*
-(NSNumber*) addDispositionUsingPOST1WithVideoId: (NSNumber*) videoId
    dispositionResource: (SWGDispositionResource*) dispositionResource
    completionHandler: (void (^)(SWGDispositionResource* output, NSError* error)) handler;


/// Add a new flag
/// 
///
/// @param videoId The video id
/// @param reason The flag reason (optional)
/// 
///  code:201 message:"Created",
///  code:202 message:"Accepted",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) addFlagUsingPOSTWithVideoId: (NSNumber*) videoId
    reason: (NSString*) reason
    completionHandler: (void (^)(NSError* error)) handler;


/// Adds one or more existing videos as related to this one
/// 
///
/// @param videoId The video id
/// @param videoRelationshipResource The video relationship object  (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGVideoRelationshipResource*
-(NSNumber*) addRelatedUsingPOSTWithVideoId: (NSNumber*) videoId
    videoRelationshipResource: (SWGVideoRelationshipResource*) videoRelationshipResource
    completionHandler: (void (^)(SWGVideoRelationshipResource* output, NSError* error)) handler;


/// Adds a new video in the system
/// 
///
/// @param videoResource The video object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGVideoResource*
-(NSNumber*) addVideoUsingPOSTWithVideoResource: (SWGVideoResource*) videoResource
    completionHandler: (void (^)(SWGVideoResource* output, NSError* error)) handler;


/// Adds a user to a video's whitelist
/// Whitelisted users can view video regardless of privacy setting.
///
/// @param _id The video id
/// @param userId The user id (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) addWhitelistUsingPOSTWithId: (NSNumber*) _id
    userId: (NSNumber*) userId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a video comment
/// 
///
/// @param videoId The video id
/// @param _id The comment id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteCommentUsingDELETE1WithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a video comment
/// 
///
/// @param dispositionId The disposition id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteDispositionUsingDELETE1WithDispositionId: (NSNumber*) dispositionId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a flag
/// 
///
/// @param videoId The video id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteFlagUsingDELETEWithVideoId: (NSNumber*) videoId
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete a video's relationship
/// 
///
/// @param videoId The video id
/// @param _id The relationship id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteRelationshipUsingDELETE1WithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Removes a video from the system if no resources are attached to it
/// 
///
/// @param _id The video id
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) deleteVideoUsingDELETEWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Returns a page of comments for a video
/// 
///
/// @param videoId The video id
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageCommentResource_*
-(NSNumber*) getCommentsUsingGET1WithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageCommentResource_* output, NSError* error)) handler;


/// Returns a page of dispositions for a video
/// 
///
/// @param videoId The video id
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageDispositionResource_*
-(NSNumber*) getDispositionsUsingGET1WithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageDispositionResource_* output, NSError* error)) handler;


/// Returns a page of video relationships
/// 
///
/// @param videoId The video id
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageVideoRelationshipResource_*
-(NSNumber*) getRelatedUsingGETWithVideoId: (NSNumber*) videoId
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageVideoRelationshipResource_* output, NSError* error)) handler;


/// Get user videos
/// 
///
/// @param userId The user id
/// @param excludeFlagged Skip videos that have been flagged by the current user (optional) (default to true)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageVideoResource_*
-(NSNumber*) getUserVideosUsingGETWithUserId: (NSNumber*) userId
    excludeFlagged: (NSNumber*) excludeFlagged
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageVideoResource_* output, NSError* error)) handler;


/// Loads a specific video details
/// 
///
/// @param _id The video id
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGVideoResource*
-(NSNumber*) getVideoUsingGETWithId: (NSNumber*) _id
    completionHandler: (void (^)(SWGVideoResource* output, NSError* error)) handler;


/// Removes a contributor from a video
/// 
///
/// @param videoId The video id
/// @param _id The contributor id
/// 
///  code:202 message:"Accepted",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) removeContributorUsingDELETEWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Removes a user from a video's whitelist
/// Remove the user with the id given in the path from the whitelist of users that can view this video regardless of privacy setting.
///
/// @param videoId The video id
/// @param _id The user id
/// 
///  code:202 message:"Accepted",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSNumber*) removeWhitelistUsingDELETEWithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;


/// Search videos using the documented filters
/// 
///
/// @param excludeFlagged Skip videos that have been flagged by the current user (optional) (default to true)
/// @param filterVideosByUploader Filter for videos by uploader id (optional)
/// @param filterCategory Filter for videos from a specific category by id (optional)
/// @param filterTagset Filter for videos with specified tags (separated by comma) (optional)
/// @param filterVideosByName Filter for videos which name *STARTS* with the given string (optional)
/// @param filterVideosByContributor Filter for videos with contribution from the artist specified by ID (optional)
/// @param filterVideosByAuthor Filter for videos with an artist as author specified by ID (optional)
/// @param filterHasAuthor Filter for videos that have an author set if true, or that have no author if false (optional)
/// @param filterHasUploader Filter for videos that have an uploader set if true, or that have no uploader if false (optional)
/// @param filterRelatedTo Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well (optional)
/// @param filterFriends Filter for videos uploaded by friends. &#39;true&#39; for friends of the caller (requires user token) or a user id for a specific user&#39;s friends (requires VIDEOS_ADMIN permission) (optional)
/// @param filterDisposition Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or &#39;me&#39; for the caller (requires user token for &#39;me&#39;) and DISPOSITION is the name of the disposition. E.G. filter_disposition&#x3D;123:like or filter_disposition&#x3D;me:favorite (optional)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageVideoResource_*
-(NSNumber*) searchVideosUsingGETWithExcludeFlagged: (NSNumber*) excludeFlagged
    filterVideosByUploader: (NSString*) filterVideosByUploader
    filterCategory: (NSString*) filterCategory
    filterTagset: (NSString*) filterTagset
    filterVideosByName: (NSString*) filterVideosByName
    filterVideosByContributor: (NSString*) filterVideosByContributor
    filterVideosByAuthor: (NSString*) filterVideosByAuthor
    filterHasAuthor: (NSNumber*) filterHasAuthor
    filterHasUploader: (NSNumber*) filterHasUploader
    filterRelatedTo: (NSString*) filterRelatedTo
    filterFriends: (NSNumber*) filterFriends
    filterDisposition: (NSString*) filterDisposition
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageVideoResource_* output, NSError* error)) handler;


/// Update video comment content 
/// 
///
/// @param videoId The video id
/// @param _id The comment id
/// @param content The comment content (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateCommentUsingPUT1WithVideoId: (NSNumber*) videoId
    _id: (NSNumber*) _id
    content: (NSString*) content
    completionHandler: (void (^)(NSError* error)) handler;


/// Update a video's relationship details
/// 
///
/// @param videoId The video id
/// @param relationshipId The relationship id
/// @param details The video relationship details (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateRelationshipUsingPUT1WithVideoId: (NSNumber*) videoId
    relationshipId: (NSNumber*) relationshipId
    details: (NSString*) details
    completionHandler: (void (^)(NSError* error)) handler;


/// Modifies a video's details
/// 
///
/// @param _id The video id
/// @param videoResource The video object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) updateVideoUsingPUTWithId: (NSNumber*) _id
    videoResource: (SWGVideoResource*) videoResource
    completionHandler: (void (^)(NSError* error)) handler;


/// Increment a video's view count
/// 
///
/// @param _id The video id
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSNumber*) viewVideoUsingPOSTWithId: (NSNumber*) _id
    completionHandler: (void (^)(NSError* error)) handler;



@end
