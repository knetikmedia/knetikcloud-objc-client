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




@protocol SWGNewPasswordRequest
@end

@interface SWGNewPasswordRequest : SWGObject

/* The new password in plain text 
 */
@property(nonatomic) NSString* password;
/* The secret provided after the password reset 
 */
@property(nonatomic) NSString* secret;

@end
