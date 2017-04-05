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


#import "JSAPILocalizer.h"


@protocol JSAPITemplateSMSResource
@end

@interface JSAPITemplateSMSResource : JSAPIObject

/* The phone number to attribute the outgoing message to. Optional if the config text.out_number is set. [optional]
 */
@property(nonatomic) NSString* from;

@property(nonatomic) JSAPILocalizer* localizer;
/* A list of user ids to send the message to. 
 */
@property(nonatomic) NSArray<NSNumber*>* recipients;
/* The key for the template. 
 */
@property(nonatomic) NSString* templateKey;
/* A list of values to fill in the template. Order matters. [optional]
 */
@property(nonatomic) NSArray<NSString*>* templateVars;

@end
