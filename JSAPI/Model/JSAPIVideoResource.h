#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "JSAPICommentResource.h"
#import "JSAPIContributionResource.h"
#import "JSAPISimpleReferenceResourceLong_.h"
#import "JSAPISimpleReferenceResourceString_.h"
#import "JSAPISimpleUserResource.h"


@protocol JSAPIVideoResource
@end

@interface JSAPIVideoResource : JSAPIObject

/* Whether the video is available, based on various factors [optional]
 */
@property(nonatomic) NSNumber* active;
/* The original artist of the media [optional]
 */
@property(nonatomic) JSAPISimpleReferenceResourceLong_* author;
/* The date the media was created as a unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* authored;
/* Whether the video has been banned or not [optional]
 */
@property(nonatomic) NSNumber* banned;
/* The category of the video 
 */
@property(nonatomic) JSAPISimpleReferenceResourceString_* category;
/* The comments of the video [optional]
 */
@property(nonatomic) NSArray<JSAPICommentResource>* comments;
/* Artists that contributed to the creation. See separate endpoint to add to list [optional]
 */
@property(nonatomic) NSArray<JSAPIContributionResource>* contributors;
/* The date/time this resource was created in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The country of an embedable version [optional]
 */
@property(nonatomic) NSString* embed;
/* The file extension of the media file. 1-5 characters 
 */
@property(nonatomic) NSString* extension;
/* The height of the video in px 
 */
@property(nonatomic) NSNumber* height;
/* The unique ID for that resource [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The length of the video in seconds 
 */
@property(nonatomic) NSNumber* length;
/* The country of the media. Typically a url. Cannot be blank 
 */
@property(nonatomic) NSString* location;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The mime-type of the media [optional]
 */
@property(nonatomic) NSString* mimeType;
/* The user friendly name of that resource 
 */
@property(nonatomic) NSString* name;
/* The sort order of the video. default: 100 [optional]
 */
@property(nonatomic) NSNumber* priority;
/* The privacy setting. default: private [optional]
 */
@property(nonatomic) NSString* privacy;
/* Whether the video has been made public. Default true [optional]
 */
@property(nonatomic) NSNumber* published;
/* The user friendly name of that resource. Defaults to blank string [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* The size of the media. Minimum 0 if supplied [optional]
 */
@property(nonatomic) NSNumber* size;
/* The tags for the video [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* The country of a thumbnail version. Typically a url [optional]
 */
@property(nonatomic) NSString* thumbnail;
/* The date/time this resource was last updated in seconds since unix epoch [optional]
 */
@property(nonatomic) NSNumber* updatedDate;
/* The user the media was uploaded by. May be null for system uploaded media. May only be set to a user other than the current caller if VIDEOS_ADMIN permission. Null will mean the caller is the uploader unless the caller has VIDEOS_ADMIN permission, in which case it will be set to null [optional]
 */
@property(nonatomic) JSAPISimpleUserResource* uploader;
/* The view count of the video [optional]
 */
@property(nonatomic) NSNumber* views;
/* The width of the video in px 
 */
@property(nonatomic) NSNumber* width;

@end
