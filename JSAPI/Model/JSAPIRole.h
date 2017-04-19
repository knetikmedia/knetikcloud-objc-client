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


#import "JSAPIPermission.h"


@protocol JSAPIRole
@end

@interface JSAPIRole : JSAPIObject


@property(nonatomic) NSNumber* clientCount;

@property(nonatomic) NSNumber* createdDate;

@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* locked;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* role;

@property(nonatomic) NSArray<JSAPIPermission>* rolePermission;

@property(nonatomic) NSNumber* userCount;

@end
