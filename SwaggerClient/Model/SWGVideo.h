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


#import "SWGArtist.h"
#import "SWGCollectionVideoContribution_.h"
#import "SWGUser.h"
#import "SWGVideoTag.h"


@protocol SWGVideo
@end

@interface SWGVideo : SWGObject


@property(nonatomic) NSNumber* active;

@property(nonatomic) SWGArtist* author;

@property(nonatomic) NSNumber* authored;

@property(nonatomic) NSNumber* banned;

@property(nonatomic) NSString* categoryId;

@property(nonatomic) NSString* categoryName;

@property(nonatomic) SWGCollectionVideoContribution_* contributors;

@property(nonatomic) NSNumber* created;

@property(nonatomic) NSString* embed;

@property(nonatomic) NSString* extension;

@property(nonatomic) NSNumber* height;

@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* length;

@property(nonatomic) NSString* location;

@property(nonatomic) NSString* longDescription;

@property(nonatomic) NSString* mimeType;

@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* priority;

@property(nonatomic) NSString* privacy;

@property(nonatomic) NSNumber* published;

@property(nonatomic) NSString* shortDescription;

@property(nonatomic) NSNumber* size;

@property(nonatomic) NSArray<SWGVideoTag>* tags;

@property(nonatomic) NSString* thumbnail;

@property(nonatomic) NSNumber* updated;

@property(nonatomic) SWGUser* uploader;

@property(nonatomic) NSNumber* views;

@property(nonatomic) NSArray<SWGUser>* whitelist;

@property(nonatomic) NSNumber* width;

@end