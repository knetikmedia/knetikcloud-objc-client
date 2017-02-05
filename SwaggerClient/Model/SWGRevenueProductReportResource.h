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




@protocol SWGRevenueProductReportResource
@end

@interface SWGRevenueProductReportResource : SWGObject


@property(nonatomic) NSNumber* itemId;

@property(nonatomic) NSString* itemName;

@property(nonatomic) NSNumber* revenue;

@property(nonatomic) NSNumber* volume;

@end
