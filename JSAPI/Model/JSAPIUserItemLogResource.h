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


#import "JSAPISimpleReferenceResourceInt_.h"
#import "JSAPISimpleUserResource.h"


@protocol JSAPIUserItemLogResource
@end

@interface JSAPIUserItemLogResource : JSAPIObject

/* The log entry id [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Additional information defined by the type [optional]
 */
@property(nonatomic) NSString* info;
/* The item interacted with [optional]
 */
@property(nonatomic) JSAPISimpleReferenceResourceInt_* item;
/* The date/time this event occurred in seconds since epoch [optional]
 */
@property(nonatomic) NSNumber* logDate;
/* The type of event [optional]
 */
@property(nonatomic) NSString* type;
/* The user making the interaction [optional]
 */
@property(nonatomic) JSAPISimpleUserResource* user;
/* The id of the inventory entry this event is related to, if any [optional]
 */
@property(nonatomic) NSNumber* userInventory;

+ (NSDictionary *)modalDictionary;

@end
