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


#import "JSAPIBehavior.h"
@protocol JSAPIBehavior;
@class JSAPIBehavior;



@protocol JSAPIPreReqEntitlement
@end

@interface JSAPIPreReqEntitlement : JSAPIBehavior

/* The item ids that must already be in the user's inventory 
 */
@property(nonatomic) NSArray<NSNumber*>* itemIds;


@end
