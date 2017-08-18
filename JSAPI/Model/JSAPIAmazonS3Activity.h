#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol JSAPIAmazonS3Activity
@end

@interface JSAPIAmazonS3Activity : JSAPIObject

/* S3 action (i.e., 'PUT') associated with the activity [optional]
 */
@property(nonatomic) NSString* action;
/* URL for accessing the resource via CDN if configured (will default to the main url if not) [optional]
 */
@property(nonatomic) NSString* cdnUrl;
/* Date the resource was created in S3 [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* Name of the file being processed as a resource in S3 [optional]
 */
@property(nonatomic) NSString* filename;
/* Unique id of the S3 activity [optional]
 */
@property(nonatomic) NSNumber* _id;
/* S3 object key for the resource [optional]
 */
@property(nonatomic) NSString* objectKey;
/* URL for posting and later accessing the S3 resource [optional]
 */
@property(nonatomic) NSString* url;
/* The id of the user that created this S3 activity [optional]
 */
@property(nonatomic) NSNumber* userId;

+ (NSDictionary *)modalDictionary;

@end