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


#import "JSAPIExpressionResource.h"


@protocol JSAPIEventContextResource
@end

@interface JSAPIEventContextResource : JSAPIObject


@property(nonatomic) NSString* eventName;

@property(nonatomic) NSDictionary<JSAPIExpressionResource>* parameters;

@property(nonatomic) NSString* type;

@end
