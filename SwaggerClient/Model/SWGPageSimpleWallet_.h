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


#import "SWGSimpleWallet.h"
#import "SWGSort.h"


@protocol SWGPageSimpleWallet_
@end

@interface SWGPageSimpleWallet_ : SWGObject


@property(nonatomic) NSArray<SWGSimpleWallet>* content;

@property(nonatomic) NSNumber* first;

@property(nonatomic) NSNumber* last;

@property(nonatomic) NSNumber* number;

@property(nonatomic) NSNumber* numberOfElements;

@property(nonatomic) NSNumber* size;

@property(nonatomic) SWGSort* sort;

@property(nonatomic) NSNumber* totalElements;

@property(nonatomic) NSNumber* totalPages;

@end
