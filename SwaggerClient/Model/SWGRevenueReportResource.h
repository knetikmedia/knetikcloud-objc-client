#import <Foundation/Foundation.h>
#import "SWGObject.h"

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




@protocol SWGRevenueReportResource
@end

@interface SWGRevenueReportResource : SWGObject


@property(nonatomic) NSNumber* customerCount;

@property(nonatomic) NSNumber* saleCount;

@property(nonatomic) NSNumber* salesAverage;

@property(nonatomic) NSNumber* salesTotal;

@end
