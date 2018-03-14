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





@protocol JSAPIBatchRequest
@end

@interface JSAPIBatchRequest : JSAPIObject

/* The request body as would be passed to the URI 
 */
@property(nonatomic) NSObject* body;
/* Content type used, Ex:(application/json) 
 */
@property(nonatomic) NSString* contentType;
/* The HTTP method used, Ex: (GET) 
 */
@property(nonatomic) NSString* method;
/* Time in seconds before process will timeout.  Default is 60.  Range is 1-300 
 */
@property(nonatomic) NSNumber* timeout;
/* The oauth token only [optional]
 */
@property(nonatomic) NSString* token;
/* Full URI of REST call 
 */
@property(nonatomic) NSString* uri;

+ (NSDictionary *)modalDictionary;

@end
