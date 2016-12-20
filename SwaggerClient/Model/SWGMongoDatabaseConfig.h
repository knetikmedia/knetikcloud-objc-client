#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGMongoDatabaseConfig
@end

@interface SWGMongoDatabaseConfig : SWGObject


@property(nonatomic) NSString* dbName;

@property(nonatomic) NSString* options;

@property(nonatomic) NSString* password;

@property(nonatomic) NSString* servers;

@property(nonatomic) NSString* username;

@end