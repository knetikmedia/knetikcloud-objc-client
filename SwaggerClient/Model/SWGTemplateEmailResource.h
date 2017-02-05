#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGKeyValuePairStringString_.h"


@protocol SWGTemplateEmailResource
@end

@interface SWGTemplateEmailResource : SWGObject

/* Address to attribute the outgoing message to. Optional if the config email.out_address is set. [optional]
 */
@property(nonatomic) NSString* from;
/* A list of user ids to send the message to. 
 */
@property(nonatomic) NSArray<NSNumber*>* recipients;
/* The key for the template 
 */
@property(nonatomic) NSString* templateKey;
/* A list of variables to fill in the template [optional]
 */
@property(nonatomic) NSArray<SWGKeyValuePairStringString_>* templateVars;

@end
