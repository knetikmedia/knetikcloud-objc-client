#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGRawSMSResource
@end

@interface SWGRawSMSResource : SWGObject

/* The phone number to attribute the outgoing message to. Optional if the config text.out_number is set. [optional]
 */
@property(nonatomic) NSString* from;
/* A list of user ids to send the message to. 
 */
@property(nonatomic) NSArray<NSNumber*>* recipients;
/* The body of the outgoing text message. 
 */
@property(nonatomic) NSString* text;

@end
