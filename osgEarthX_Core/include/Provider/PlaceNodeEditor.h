#ifndef OSGEARTHANNO_PLACENODE_EDITING_H
#define OSGEARTHANNO_PLACENODE_EDITING_H 1

#include <osg/Group>
#include <osgEarthAnnotation/Common>
#include <osgEarthAnnotation/PlaceNode>
#include <osgEarthAnnotation/Draggers>
#include <osgEarth/MapNode>
#include <osgEarthXCoreExport/Export.h>

namespace osgEarthXCore {
		/**
		* An editor node that allows you to move the position of LocalizedNode annotations
		*/
		class OSGEARTHX_CORE_EXPORT PlaceNodeEditor : public osg::Group
		{
		public:
			/**
			* Create a new LocalizedAnnotationEditor
			* @param localizedNode
			*        The LocalizedNode to edit
			*/
			PlaceNodeEditor(osgEarth::Annotation::PositionedAnnotationNode* localizedNode);

			virtual ~PlaceNodeEditor();

			virtual void updateDraggers();

			osgEarth::Dragger* getPositionDragger() { return _dragger; }

			void setPosition(const osgEarth::GeoPoint& pos);

		protected:
			osg::ref_ptr< osgEarth::Annotation::PositionedAnnotationNode > _node;
			osgEarth::Dragger* _dragger;
		};

	}
#endif