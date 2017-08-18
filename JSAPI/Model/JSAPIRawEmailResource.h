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





@protocol JSAPIRawEmailResource
@end

@interface JSAPIRawEmailResource : JSAPIObject

/* The body of the outgoing message. 
 */
@property(nonatomic) NSString* body;
/* Address to attribute the outgoing message to. Optional if the config email.out_address is set. [optional]
 */
@property(nonatomic) NSString* from;
/* Whether the body is to be treated as html. Default false. [optional]
 */
@property(nonatomic) NSNumber* html;
/* A list of user ids to send the message to. 
 */
@property(nonatomic) NSArray<NSNumber*>* recipients;
/* The subject of the outgoing message. 
 */
@property(nonatomic) NSString* subject;

+ (NSDictionary *)modalDictionary;

@end